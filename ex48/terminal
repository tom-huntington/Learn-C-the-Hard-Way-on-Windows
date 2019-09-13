[a@DESKTOP-AAAAAAA ex48]$ make
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  -fPIC   -c -o src/net.o src/net.c
ar rcs build/libstatserve.a src/net.o src/statserve.o
ranlib build/libstatserve.a
gcc.exe -shared -o build/libstatserve.so src/net.o src/statserve.o -LC:\\a\\usr\\local\\lib -llcthw  -lws2_32 -llcthw
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  build/libstatserve.a  -LC:\\a\\usr\\local\\lib -llcthw   tests/statserve_tests.c build/libstatserve.a build/libstatserve.so  -lws2_32 -llcthw -o tests/statserve_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\z\ex48\tests\statserve_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/statserve_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols   -LC:\\a\\usr\\local\\lib -llcthw   bin/statserve.c build/libstatserve.a  -lws2_32 -llcthw -o bin/statserve
[a@DESKTOP-AAAAAAA ex48]$ ./bin/statserve.exe 127.0.0.1 9000
DEBUG src/net.c:117: created socket: 292
DEBUG src/net.c:126: bound socket: 292
DEBUG src/net.c:131: listening to fd: 292
DEBUG src/statserve.c:70: pre-accept.
DEBUG src/statserve.c:76: Client connected.
DEBUG src/statserve.c:70: pre-accept.
[ERROR] (src/lcthw/ringbuffer.c:67: errno: None) Need more than 0 for ge
ts, you gave: 0
[ERROR] (src/net.c:85: errno: None) Failed to get from the buffer.
DEBUG src/statserve.c:31: Client closed.

[a@DESKTOP-AAAAAAA ex48]$ nc 127.0.0.1 9000
hi
hi
hi
hi
hi
hi
echo
echo
^C[a@DESKTOP-AAAAAAA ex48]$