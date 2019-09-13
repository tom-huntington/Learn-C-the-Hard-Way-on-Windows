#include <stdio.h>
#include <dbg.h>
#include "statserve.h"
#include "net.h"
#include <winsock.h>

int main(int argc, char *argv[])
{
    check(argc == 3, "USAGE: statserve host port");

    const char *host = argv[1];
    const char *port = argv[2];

    WSADATA wsaData;
    if(WSAStartup(MAKEWORD(1,1), &wsaData) != 0) {
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }

    check(echo_server(host, port), "Failed to run the echo server.");

    WSACleanup();

    return 0;

error:
    
    return 1;
}
