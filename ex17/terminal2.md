$ cat terminal.md
$ diff ex17.c ~/master-learn-c-the-hard-way-lectures/ex17/ex17
.c
62c62
<         conn->file = fopen(filename, "rb+");
---
>         conn->file = fopen(filename, "r+");
$ make ex17.c
make: Nothing to be done for 'ex17.c'.
$ make ex17
cc     ex17.c   -o ex17
$ ./ex17 db.dat c
$ ./ex17 db.dat s 1 zed zed@zedshaw.com
$ ./ex17 db.dat s 2 frank frank@zedshaw.com
$ ./ex17 db.dat s 3 joe joe@zedshaw.com
$ ./ex17 db.dat s 3 joe joe@zedshaw.com
1 zed zed@zedshaw.com
2 frank frank@zedshaw.com
3 joe joe@zedshaw.com
$ ./ex17 db.dat d 3
$ ./ex17 db.dat l
1 zed zed@zedshaw.com
2 frank frank@zedshaw.com
$ ./ex17 db.dat g 2
2 frank frank@zedshaw.com
