[root@DESKTOP-AAAAAAA ex33]# make
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/list.o src/lcthw/list.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/list_algos.o src/lcthw/list_algos.c
ar rcs build/liblcthw.a src/lcthw/list.o src/lcthw/list_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/list.o src/lcthw/list_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex33\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\msys64\home\a\learn-c-the-hard-way-on-windows\ex33\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS