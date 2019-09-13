#undef NDEBUG
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

const int RB_SIZE = 1024 * 10;


DWORD WINAPI client_handler(void *pclient_fd)
{
    int rc = 0;
    int client_fd = *((int *)pclient_fd);
    // need a ringbuffer for the input
    RingBuffer *sock_rb = RingBuffer_create(RB_SIZE);

    // read_some in a loop
    while(read_some(sock_rb, client_fd, 1) != -1) {
        // write_it back off the ringbuffer
        if(write_some(sock_rb, client_fd, 1) == -1) {
            debug("Client closed.");
            break;
        }
    }

    // close the socket
    rc = closesocket(client_fd);
    check(rc != -1, "Failed to close the socket.");

error: // fallthrough
    if(sock_rb) RingBuffer_destroy(sock_rb);
    return 0; // just exit the child process
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
        //*client_fd[i] = accept(server_socket, NULL, NULL); 
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
