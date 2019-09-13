#include <stdio.h>
#include <dbg.h>
#include "statserve.h"
#include "net.h"
#include <winsock.h>


int main(int argc, char *argv[])
{
    check(argc == 4, "USAGE: statserve host port store_path");

    const char *host = argv[1];
    const char *port = argv[2];
    const char *store_path = argv[3];

    WSADATA wsaData;
    if(WSAStartup(MAKEWORD(1,1), &wsaData) != 0) {
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }

    check(run_server(host, port, store_path), "Failed to run the echo server.");

    return 0;

error:
    
    return 1;
}
