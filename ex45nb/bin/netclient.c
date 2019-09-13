#define WINVER WindowsXP
#undef NDEBUG
#include <stdlib.h>
#include <stdio.h>
#include <lcthw/ringbuffer.h>
#include <lcthw/dbg.h>
#include <fcntl.h>
#include <winsock2.h>
#include <ws2tcpip.h>

struct tagbstring NL = bsStatic("\n");
struct tagbstring CRLF = bsStatic("\r\n");

int nonblock(int fd)
{
    long unsigned int opt = 1;
    int flags = ioctlsocket(fd, FIONBIO, &opt);
    check(flags >= 0, "Invalid flags on nonblock.");

    return 0;
error:
    return -1;
}

int client_connect(char *host, char *port)
{
    int rc = 0;
    struct addrinfo *addr = NULL;
    
    rc = getaddrinfo(host, port, NULL, &addr);
    check(rc == 0, "Failed to lookup %s:%s", host, port);

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    check(sock >= 0, "Cannot create a socket.");

    rc = connect(sock, addr->ai_addr, addr->ai_addrlen);
    check(rc == 0, "Connect failed.");

    rc = nonblock(sock);
    check(rc == 0, "Can't set nonblocking.");

    freeaddrinfo(addr);
    return sock;
error:
    freeaddrinfo(addr);
    return -1;
}

int read_some(RingBuffer * buffer, int fd, int is_socket)
{
    int rc = 0;

    if (RingBuffer_available_data(buffer) == 0) {
        buffer->start = buffer->end = 0;
    }

    if (is_socket) {
        rc = recv(fd, RingBuffer_starts_at(buffer),
                RingBuffer_available_space(buffer), 0);
        debug("recv fd: %d, rc: %d", fd, rc);
    } else {
        rc = read(fd, RingBuffer_starts_at(buffer),
                RingBuffer_available_space(buffer));
        debug("read fd: %d, rc: %d", fd, rc);
    }
    
    if (rc == -1) {
        if (WSAGetLastError() == 10035) rc = 10035;
    }

    check(rc >= 0, "Failed to read from fd: %d, rc = %d, WSError: %d", fd, rc, WSAGetLastError());

    RingBuffer_commit_write(buffer, rc);

    return rc;
error:
    return -1;
}

int write_some(RingBuffer * buffer, int fd, int is_socket)
{
    int rc = 0;
    bstring data = RingBuffer_get_all(buffer);

    check(data != NULL, "Failed to get from the buffer.");
    check(bfindreplace(data, &NL, &CRLF, 0) == BSTR_OK,
            "Failed to replace NL.");

    if (is_socket) {
        rc = send(fd, bdata(data), blength(data), 0);
        debug("send fd: %d, rc: %d", fd, rc);
    } else {
        rc = write(fd, bdata(data), blength(data));
        debug("write fd: %d, rc: %d", fd, rc);
    }

    check(rc == blength(data), "Failed to write everything to fd: %d.", fd);
    bdestroy(data);

    return rc;
error:
    return -1;
}

int main(int argc, char *argv[])
{
    WSADATA wsaData;

    if (WSAStartup(MAKEWORD(1,1), &wsaData) != 0) {
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }

    int socket = 0;
    int rc = 0;
    RingBuffer *in_rb = RingBuffer_create(1024 * 10);

    RingBuffer *sock_rb = RingBuffer_create(1024 * 10);

    check(argc == 3, "USAGE: netclient host port.");

    socket = client_connect(argv[1], argv[2]);
    check(socket >= 0, "connect to %s:%s failed.", argv[1], argv[2]);
    while(1) {
        if (1) {
            rc = read_some(in_rb, 0, 0);
            check_debug(rc != -1, "Failed to read from stdin.");
        }
        
        if (1) {
            rc = read_some(sock_rb, socket, 1);
            check_debug( rc != -1, "Failed to read from socket.");
        }

        while (!RingBuffer_empty(sock_rb)) {
            rc = write_some(sock_rb, 1, 0);
            check_debug(rc != -1, "Failed to write to stdout.");
        }

        while (!RingBuffer_empty(in_rb)) {
            rc = write_some(in_rb, socket, 1);
            check_debug(rc != -1, "Failed to write to socket.");
        }
    }

    closesocket(socket);
    WSACleanup();

    return 0;
error:
    return -1;
}
