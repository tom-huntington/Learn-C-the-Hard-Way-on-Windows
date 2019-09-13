[a@DESKTOP-AAAAAAA ex34]$ make
ar rcs build/liblcthw.a src/lcthw/list.o src/lcthw/darray.o src/lcthw/list_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/list.o src/lcthw/darray.o src/lcthw/list_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/darray_tests.c  build/liblcthw.a -o tests/darray_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex34\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex34\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex34\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS