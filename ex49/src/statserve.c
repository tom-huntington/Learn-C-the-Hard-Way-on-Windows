#undef NDEBUG
#include <lcthw/hashmap.h>
#include <lcthw/stats.h>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <stdio.h>
#include <ctype.h>
#include <lcthw/dbg.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include "net.h"
#include <winsock2.h>
#include <ws2tcpip.h>

#define MAX_THREADS 10

struct tagbstring LINE_SPLIT = bsStatic(" ");
struct tagbstring CREATE = bsStatic("create");
struct tagbstring STDDEV = bsStatic("stddev");
struct tagbstring MEAN = bsStatic("mean");
struct tagbstring SAMPLE = bsStatic("sample");
struct tagbstring DUMP = bsStatic("dump");
struct tagbstring D3LETE = bsStatic("delete");
struct tagbstring OK = bsStatic("OK\n");
struct tagbstring ERR = bsStatic("ERR\n");
struct tagbstring DNE = bsStatic("DNE\n");
struct tagbstring EXISTS = bsStatic("EXISTS\n");
const char LINE_ENDING = '\n';



const int RB_SIZE = 1024 * 10;

Hashmap *DATA = NULL;

struct Command;

typedef int (*handler_cb)(struct Command *cmd, RingBuffer *send_rb);

typedef struct Command {
    bstring command;
    bstring name;
    bstring number;
    handler_cb handler;
} Command;


typedef struct Record {
    bstring name;
    Stats *stat;
} Record;


void send_reply(RingBuffer *send_rb, bstring reply)
{
    RingBuffer_puts(send_rb, reply);
}

int handle_create(Command *cmd, RingBuffer *send_rb)
{
    int rc = 0;

    // if the name is in the DATA map then return exists
    if(Hashmap_get(DATA, cmd->name)) {
        send_reply(send_rb, &EXISTS);
    } else {
        // allocate a recrod
        debug("create: %s %s", bdata(cmd->name), bdata(cmd->number));

        Record *info = calloc(sizeof(Record), 1);
        check_mem(info);

        // set its stat element
        info->stat = Stats_create();
        check_mem(info->stat);

        // set its name element
        info->name = bstrcpy(cmd->name);
        check_mem(info->name);

        // do a first sample
        Stats_sample(info->stat, atof(bdata(cmd->number)));

        // add it to the hashmap
        rc = Hashmap_set(DATA, info->name, info);
        check(rc == 0, "Failed to add data to map.");

        // send an OK
        send_reply(send_rb, &OK);
    }

    return 0;
error:
    return -1;
}


int handle_sample(Command *cmd, RingBuffer *send_rb)
{
    // get the info from the hashmap
    Record *info = Hashmap_get(DATA, cmd->name);

    if(info == NULL) {
        // if it doesn't exist then DNE
        send_reply(send_rb, &DNE);
    } else {
        // else run sample on it, return the mean
        Stats_sample(info->stat, atof(bdata(cmd->number)));
        bstring reply = bformat("%f\n", Stats_mean(info->stat));
        send_reply(send_rb, reply);
        bdestroy(reply);
    }


    return 0;
}

int handle_delete(Command *cmd, RingBuffer *send_rb)
{
    log_info("delete: %s", bdata(cmd->name));
    Record *info = Hashmap_get(DATA, cmd->name);

    if(info == NULL) {
        send_reply(send_rb, &DNE);
    } else {
        Hashmap_delete(DATA, cmd->name);

        free(info->stat);
        bdestroy(info->name);
        free(info);

        send_reply(send_rb, &OK);
    }

    return 0;
}

int handle_mean(Command *cmd, RingBuffer *send_rb)
{
    log_info("mean: %s", bdata(cmd->name));
    Record *info = Hashmap_get(DATA, cmd->name);

    if(info == NULL) {
        send_reply(send_rb, &DNE);
    } else {
        bstring reply = bformat("%f\n", Stats_mean(info->stat));
        send_reply(send_rb, reply);
        bdestroy(reply);
    }

    return 0;
}

int handle_stddev(Command *cmd, RingBuffer *send_rb)
{
    log_info("stddev: %s", bdata(cmd->name));
    Record *info = Hashmap_get(DATA, cmd->name);

    if(info == NULL) {
        send_reply(send_rb, &DNE);
    } else {
        bstring reply = bformat("%f\n", Stats_stddev(info->stat));
        send_reply(send_rb, reply);
        bdestroy(reply);
    }

    return 0;
}

int handle_dump(Command *cmd, RingBuffer *send_rb)
{
    log_info("dump: %s", bdata(cmd->name));
    Record *info = Hashmap_get(DATA, cmd->name);

    if(info == NULL) {
        send_reply(send_rb, &DNE);
    } else {
        bstring reply = bformat("%f %f %f %f %ld %f %f\n",
                Stats_mean(info->stat),
                Stats_stddev(info->stat),
                info->stat->sum,
                info->stat->sumsq,
                info->stat->n,
                info->stat->min,
                info->stat->max);

        send_reply(send_rb, reply);
        bdestroy(reply);
    }

    return 0;
}

int parse_command(struct bstrList *splits, Command *cmd)
{
    // get the command
    cmd->command = splits->entry[0];

    if(biseq(cmd->command, &CREATE)) {
        check(splits->qty == 3, "Failed to parse create: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->number = splits->entry[2];
        cmd->handler = handle_create;
    } else if(biseq(cmd->command, &MEAN)) {
        check(splits->qty == 2, "Failed to parse mean: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->handler = handle_mean;
    } else if(biseq(cmd->command, &SAMPLE)) {
        check(splits->qty == 3, "Failed to parse sample: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->number = splits->entry[2];
        cmd->handler = handle_sample;
    } else if(biseq(cmd->command, &DUMP)) {
        check(splits->qty == 2, "Failed to parse dump: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->handler = handle_dump;
    } else if(biseq(cmd->command, &D3LETE)) {
        check(splits->qty == 2, "Failed to parse delete: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->handler = handle_delete;
    } else if(biseq(cmd->command, &STDDEV)) {
        check(splits->qty == 2, "Failed to parse stddev: %d", splits->qty);
        cmd->name = splits->entry[1];
        cmd->handler = handle_stddev;
    } else {
        sentinel("Failed to parse the command.");
    }

    return 0;
error:
    return -1;
}

int parse_line(bstring data, RingBuffer *send_rb)
{
    int rc = -1;
    Command cmd = {.command = NULL};

    // split data on line boundaries
    struct bstrList *splits = bsplits(data, &LINE_SPLIT);
    check(splits != NULL, "Bad data.");

    // parse it into a command
    rc = parse_command(splits, &cmd);
    check(rc == 0, "Failed to parse command.");

    // call the command handler for that command
    rc = cmd.handler(&cmd, send_rb);

error: // fallthrough
    if(splits) bstrListDestroy(splits);
    return rc;

}


DWORD WINAPI client_handler(void *pclient_fd)
{
    int rc = 0;
    int client_fd = *((int *)pclient_fd);
    // need a ringbuffer for the input
    RingBuffer *recv_rb = RingBuffer_create(RB_SIZE);
    RingBuffer *send_rb = RingBuffer_create(RB_SIZE);

    check_mem(recv_rb);
    check_mem(send_rb);

    // read_some in a loop
    while(read_some(recv_rb, client_fd, 1) != -1) {
        // read a line from the recv_rb
        bstring data = read_line(recv_rb, LINE_ENDING);
        check(data != NULL, "Client closed.");

        // parse it, close on any protocol errors
        rc = parse_line(data, send_rb);
        bdestroy(data); // cleanup here
        check(rc == 0, "Failed to parse user. Closing.");

        // and as long as there's something to send, send it
        if(RingBuffer_available_data(send_rb)) {
            write_some(send_rb, client_fd, 1);
        }
    }

    // close the socket
    rc = closesocket(client_fd);
    check(rc != -1, "Failed to close the socket.");

error: // fallthrough
    if(recv_rb) RingBuffer_destroy(recv_rb);
    if(send_rb) RingBuffer_destroy(send_rb);
    return 0; // just exit the child process
}

int setup_data_store()
{
    // a more advanced design simply wouldn't use this
    DATA = Hashmap_create(NULL, NULL);
    check_mem(DATA);

    return 0;
error:
    return -1;
}

int echo_server(const char *host, const char *port)
{
    int *client_fd[MAX_THREADS];
    DWORD dwThreadIdArray[MAX_THREADS];
    HANDLE hThreadArray[MAX_THREADS];


    struct sockaddr_in client_addr;
    // socklen_t sin_size = sizeof(client_addr);
    int sin_size = sizeof(struct sockaddr); 
    int server_socket = 0;

    int rc = setup_data_store();
    check(rc == 0, "Failed to setup the data store.");

    check(host != NULL, "Invalid host.");
    check(port != NULL, "Invalid port.");


    // listen on the given port and host
    server_socket = server_listen(host, port);
    check(server_socket >= 0, "bind to %s:%s failed.", host, port);

    for(int i=0; i < MAX_THREADS; i++) {
        client_fd[i] = (int*) HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(int*));
        check_mem(client_fd[i]);


        debug("pre-accept.");
        // accept the connection
        *client_fd[i] = accept(server_socket, (struct sockaddr *)&client_addr, &sin_size); 
        check(*client_fd[i] >= 0, "Failed to accept connection. WSAError: %d", WSAGetLastError());

        debug("Client connected.");

        hThreadArray[i] = CreateThread(NULL, 0, client_handler, client_fd[i], 0, &dwThreadIdArray[i]);
        check(hThreadArray[i] != NULL, "Couldn't create thread.");
    }

    WaitForMultipleObjects(MAX_THREADS, hThreadArray, TRUE, INFINITE);
    for(int i = 0; i < MAX_THREADS; i++) {
        CloseHandle(hThreadArray[i]);
        if(client_fd[i] != NULL) {
            HeapFree(GetProcessHeap(), 0, client_fd[i]);
            client_fd[i] = NULL;
        }
    }

error:  // fallthrough
    closesocket(server_socket);
    WSACleanup();
    return -1;
}
