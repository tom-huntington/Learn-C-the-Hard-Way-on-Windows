[a@DESKTOP-AAAAAAA ex50]$ make clean all
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
RUNNING: C:\a\z\ex50\tests\statserve_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/statserve_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols   -LC:\\a\\usr\\local\\lib -llcthw   bin/statserve.c build/libstatserve.a  -lws2_32 -llcthw -o bin/statserve
[a@DESKTOP-AAAAAAA ex50]$ ./bin/statserve.exe 127.0.0.1 9900
DEBUG src/net.c:117: created socket: 324
DEBUG src/net.c:126: bound socket: 324
DEBUG src/net.c:131: listening to fd: 324
DEBUG src/statserve.c:397: pre-accept.
DEBUG src/statserve.c:402: Client connected.
DEBUG src/statserve.c:397: pre-accept.
[INFO] (src/statserve.c:44) create: /logins/zed /logins/zed 10
DEBUG src/statserve.c:56: create: /logins/zed 10
[INFO] (src/statserve.c:44) create: /logins/zed /logins 10
DEBUG src/statserve.c:56: create: /logins 10
[INFO] (src/statserve.c:44) create: /logins/joe /logins/joe 12
DEBUG src/statserve.c:56: create: /logins/joe 12
[INFO] (src/statserve.c:44) create: /logins/joe /logins 12
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/statserve.c:52: Child /logins exists, skipping it.
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:92) sample /logins/joe /logins/joe 100
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:92) sample /logins/joe /logins 100
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:160) mean: /logins /logins /logins
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:192) dump: /logins, /logins, /logins
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:192) dump: /logins/joe, /logins/joe, /logins/joe

DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:192) dump: /logins/joe, /logins, /logins
DEBUG src/lcthw/hashmap.c:130: TRY: 0