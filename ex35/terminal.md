[a@DESKTOP-AAAAAAA ex35]$ make
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/ex35.o src/lcthw/ex35.c
src/lcthw/ex35.c: In function 'main':
src/lcthw/ex35.c:36:14: warning: unused parameter 'argc' [-Wunused-param
eter]
 int main(int argc, char *argv[])
          ~~~~^~~~
src/lcthw/ex35.c:36:26: warning: unused parameter 'argv' [-Wunused-param
eter]
 int main(int argc, char *argv[])
                    ~~~~~~^~~~~~
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/list.o src/lcthw/list.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/darray.o src/lcthw/darray.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/list_algos.o src/lcthw/list_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/radixmap.o src/lcthw/radixmap.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/darray_algos.o src/lcthw/darray_algos.c
ar rcs build/liblcthw.a src/lcthw/ex35.o src/lcthw/list.o src/lcthw/darray.o src/lcthw/list_algos.o src/lcthw/radixmap.o src/lcthw/darray_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/ex35.o src/lcthw/list.o src/lcthw/darray.o src/lcthw/list_algos.o src/lcthw/radixmap.o src/lcthw/darray_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/radixmap_tests.c  build/liblcthw.a -o tests/radixmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/darray_algos_tests.c  build/liblcthw.a -o tests/darray_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/darray_tests.c  build/liblcthw.a -o tests/darray_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex35\tests\darray_algos_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/darray_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex35\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex35\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex35\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex35\tests\radixmap_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/radixmap_tests.exe PASS