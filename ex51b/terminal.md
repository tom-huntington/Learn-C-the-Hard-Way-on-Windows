[a@DESKTOP-AAAAAAA ex51b]$ make clean all
rm -rf build src/net.o src/statserve.o tests/statserve_tests.exe
rm -f tests/tests.log
find . -name "*.gc*" -exec rm {} \;
rm -rf `find . -name "*.dSYM" -print`
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  -fPIC   -c -o src/net.o src/net.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  -fPIC   -c -o src/statserve.o src/statserve.c
ar rcs build/libstatserve.a src/net.o src/statserve.o
ranlib build/libstatserve.a
gcc.exe -shared -o build/libstatserve.so src/net.o src/statserve.o -LC:\\a\\usr\\local\\lib -llcthw  -lws2_32 -llcthw
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  build/libstatserve.a  -LC:\\a\\usr\\local\\lib -llcthw   tests/statserve_tests.c build/libstatserve.a build/libstatserve.so  -lws2_32 -llcthw -o tests/statserve_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\z\ex51b\tests\statserve_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/statserve_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols   -LC:\\a\\usr\\local\\lib -llcthw   bin/statserve.c build/libstatserve.a  -lws2_32 -llcthw -o bin/statserve

[a@DESKTOP-AAAAAAA ex51b]$ ./bin/statserve.exe 127.0.0.1 9900 storage
DEBUG src/statserve.c:617: full path: C:\a\z\ex51b\storage
DEBUG src/net.c:117: created socket: 288
DEBUG src/net.c:126: bound socket: 288
DEBUG src/net.c:131: listening to fd: 288
DEBUG src/statserve.c:654: pre-accept.
DEBUG src/statserve.c:659: Client connected.
DEBUG src/statserve.c:654: pre-accept.
[INFO] (src/statserve.c:125) create: /zed /zed 10
DEBUG src/statserve.c:137: create: /zed 10
DEBUG src/statserve.c:375: load /zed
DEBUG src/statserve.c:108: pre-format
DEBUG src/statserve.c:110: post-format: C:\a\z\ex51b\storage\v9nmgggg
DEBUG src/statserve.c:395: pre-open read only
[INFO] (src/statserve.c:276) dump: /sam, /sam, /sam
DEBUG src/lcthw/hashmap.c:130: TRY: 0

^C[root@DESKTOP-AAAAAAA ~]# nc 127.0.0.1 9900
create /zed 10
OK
load /zed /sam
OK
dump /sam
10.000000 nan 10.000000 100.000000 1 10.000000 10.000000
