Script started on 2019-08-18 11:34:01+12:00 [TERM="xterm" TTY="/dev/pty0" COLUMNS="62" LINES="46"]
]0;~/learn-c-the-hard-way-on-windows/ex32
[32ma@DESKTOP-AAAAAAA [35mMINGW64[0m [33m~/learn-c-the-hard-way-on-windows/ex32[0m
$ make
cc -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/list.o src/lcthw/list.c
ar rcs build/liblcthw.a src/lcthw/list.o
ranlib build/liblcthw.a
cc -shared -o build/liblcthw.so src/lcthw/list.o
cc -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
cc -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
C:\msys64\tmp\ccC9clPI.o: In function `test_bubble_sort':
C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex32/tests/list_algos_tests.c:40: undefined reference to `List_bubble_sort'
C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex32/tests/list_algos_tests.c:46: undefined reference to `List_bubble_sort'
C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex32/tests/list_algos_tests.c:53: undefined reference to `List_bubble_sort'
C:\msys64\tmp\ccC9clPI.o: In function `test_merge_sort':
C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex32/tests/list_algos_tests.c:66: undefined reference to `List_merge_sort'
C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex32/tests/list_algos_tests.c:69: undefined reference to `List_merge_sort'
collect2.exe: error: ld returned 1 exit status
make: *** [<builtin>: tests/list_algos_tests] Error 1
]0;~/learn-c-the-hard-way-on-windows/ex32
[32ma@DESKTOP-AAAAAAA [35mMINGW64[0m [33m~/learn-c-the-hard-way-on-windows/ex32[0m
$ [K$ ma[K[Kexit
exit

Script done on 2019-08-18 11:35:25+12:00 [COMMAND_EXIT_CODE="2"]
