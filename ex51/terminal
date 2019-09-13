[a@DESKTOP-AAAAAAA ex51]$ make clean all
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
RUNNING: C:\a\z\ex51\tests\statserve_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/statserve_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols   -LC:\\a\\usr\\local\\lib -llcthw   bin/statserve.c build/libstatserve.a  -lws2_32 -llcthw -o bin/statserve
[a@DESKTOP-AAAAAAA ex51]$ mkdir storage
[a@DESKTOP-AAAAAAA ex51]$ ./bin/statserve.exe 127.0.0.1 9900 storage
DEBUG src/statserve.c:570: full path: C:\a\z\ex51\storage
DEBUG src/net.c:117: created socket: 324
DEBUG src/net.c:126: bound socket: 324
DEBUG src/net.c:131: listening to fd: 324
DEBUG src/statserve.c:607: pre-accept.
DEBUG src/statserve.c:612: Client connected.
DEBUG src/statserve.c:607: pre-accept.
[INFO] (src/statserve.c:125) create: /logins/zed /logins/zed 10
DEBUG src/statserve.c:137: create: /logins/zed 10
[INFO] (src/statserve.c:125) create: /logins/zed /logins 10
DEBUG src/statserve.c:137: create: /logins 10
[INFO] (src/statserve.c:125) create: /logins/joe /logins/joe 1
DEBUG src/statserve.c:137: create: /logins/joe 1
[INFO] (src/statserve.c:125) create: /logins/joe /logins 1
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/statserve.c:133: Child /logins exists, skipping it.
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:173) sample /logins/zed /logins/zed 100
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:173) sample /logins/zed /logins 100
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/statserve.c:307: store /logins
DEBUG src/statserve.c:108: pre-format
DEBUG src/statserve.c:110: post-format: C:\a\z\ex51\storage\vtmTmzNI
[ERROR] (src/statserve.c:536: errno: None) Client closed.
DEBUG src/statserve.c:612: Client connected.
DEBUG src/statserve.c:607: pre-accept.
[ERROR] (src/statserve.c:439: errno: None) Failed to parse load: 2
[ERROR] (src/statserve.c:497: errno: None) Failed to parse command.
[ERROR] (src/statserve.c:541: errno: None) Failed to parse user. Closing
.
DEBUG src/statserve.c:612: Client connected.
DEBUG src/statserve.c:607: pre-accept.
DEBUG src/statserve.c:108: pre-format
DEBUG src/statserve.c:110: post-format: C:\a\z\ex51\storage\v9nmgggg
[ERROR] (src/statserve.c:365: errno: No such file or directory) Error op
ening file: C:\a\z\ex51\storage\v9nmgggg
[ERROR] (src/statserve.c:507: errno: Bad file descriptor) Failed running
 command against path: /zed
[ERROR] (src/statserve.c:541: errno: None) Failed to parse user. Closing
.
DEBUG src/statserve.c:612: Client connected.
DEBUG src/statserve.c:607: pre-accept.
[INFO] (src/statserve.c:218) delete: /zed
[INFO] (src/statserve.c:125) create: /zed /zed 100
DEBUG src/statserve.c:137: create: /zed 100
DEBUG src/statserve.c:307: store zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/statserve.c:307: store /zed
DEBUG src/statserve.c:108: pre-format
DEBUG src/statserve.c:110: post-format: C:\a\z\ex51\storage\v9nmgggg
DEBUG src/statserve.c:108: pre-format
DEBUG src/statserve.c:110: post-format: C:\a\z\ex51\storage\v9nmgggg
[INFO] (src/statserve.c:276) dump: /sam, /sam, /sam
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:276) dump: /zed, /zed, /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[ERROR] (src/statserve.c:536: errno: None) Client closed.
DEBUG src/statserve.c:612: Client connected.
DEBUG src/statserve.c:607: pre-accept.
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:218) delete: /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:276) dump: /sam, /sam, /sam
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:276) dump: /zed, /zed, /zed
[ERROR] (src/statserve.c:536: errno: None) Client closed.
[a@DESKTOP-AAAAAAA ex51]$