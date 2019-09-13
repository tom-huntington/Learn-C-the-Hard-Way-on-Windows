[a@DESKTOP-AAAAAAA ex49]$ make
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  -fPIC   -c -o src/net.o src/net.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  -fPIC   -c -o src/statserve.o src/statserve.c
ar rcs build/libstatserve.a src/net.o src/statserve.o
ranlib build/libstatserve.a
gcc.exe -shared -o build/libstatserve.so src/net.o src/statserve.o -LC:\\a\\usr\\local\\lib -llcthw  -lws2_32 -llcthw
gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols  build/libstatserve.a  -LC:\\a\\usr\\local\\lib -llcthw   tests/statserve_tests.c build/libstatserve.a build/libstatserve.so  -lws2_32 -llcthw -o tests/statserve_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\z\ex49\tests\statserve_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/statserve_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -IC:\\a\\usr\\local\\include -Wl,--export-all-symbols   -LC:\\a\\usr\\local\\lib -llcthw   bin/statserve.c build/libstatserve.a  -lws2_32 -llcthw -o bin/statserve
[a@DESKTOP-AAAAAAA ex49]$ ./bin/statserve.exe 127.0.0.1 9900
DEBUG src/net.c:117: created socket: 288
DEBUG src/net.c:126: bound socket: 288
DEBUG src/net.c:131: listening to fd: 288
DEBUG src/statserve.c:336: pre-accept.
DEBUG src/statserve.c:341: Client connected.
DEBUG src/statserve.c:336: pre-accept.
DEBUG src/statserve.c:70: create: /zed 100
[ERROR] (src/statserve.c:228: errno: None) Failed to parse the command.
[ERROR] (src/statserve.c:247: errno: None) Failed to parse command.
[ERROR] (src/statserve.c:279: errno: None) Failed to parse user. Closing
.
DEBUG src/statserve.c:341: Client connected.
DEBUG src/statserve.c:336: pre-accept.
[INFO] (src/statserve.c:142) mean: /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[ERROR] (src/statserve.c:211: errno: None) Failed to parse sample: 2
[ERROR] (src/statserve.c:247: errno: None) Failed to parse command.
[ERROR] (src/statserve.c:279: errno: None) Failed to parse user. Closing
.
DEBUG src/statserve.c:341: Client connected.
DEBUG src/statserve.c:336: pre-accept.
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:142) mean: /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:174) dump: /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:122) delete: /zed
DEBUG src/lcthw/hashmap.c:130: TRY: 0
DEBUG src/lcthw/hashmap.c:130: TRY: 0
[INFO] (src/statserve.c:142) mean: /zed
[ERROR] (src/statserve.c:274: errno: None) Client closed.