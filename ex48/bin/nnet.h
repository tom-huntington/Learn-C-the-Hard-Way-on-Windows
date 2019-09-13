#ifndef _net_h
#define _net_h
#include <lcthw/ringbuffer.h>



int nonblock(int fd);
int client_connect(char *host, char *port);
int read_some(RingBuffer * buffer, int fd, int is_socket);
int write_some(RingBuffer * buffer, int fd, int is_socket);

#endif
