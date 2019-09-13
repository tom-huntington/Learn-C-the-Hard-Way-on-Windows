[a@DESKTOP-AAAAAAA ex38]$ sed -n 1,100000p /dev/urandom > urandom
^C
<s.c ../../liblcthw/tests/hashmap_algos_tests.c
61,62c61,62
<     FILE *urand = fopen("C:\\a\\learn-c-the-hard-way-on-windows\\ex38\\urandom", "rb");
<     check(urand != NULL, "Failed to open /mnt/../dev/urandom");
---
>     FILE *urand = fopen("/dev/urandom", "r");
>     check(urand != NULL, "Failed to open /dev/urandom");
[a@DESKTOP-AAAAAAA ex38]$ make clean all
rm -rf build src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o tests/list_tests tests/list_algos_tests tests/radixmap_tests tests/darray_algos_tests tests/hashmap_tests tests/darray_tests tests/hashmap_algos_tests
rm -f tests/tests.log
find . -name "*.gc*" -exec rm {} \;
rm -rf `find . -name "*.dSYM" -print`
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/ex35.o src/lcthw/ex35.c
src/lcthw/ex35.c: In function 'main':
src/lcthw/ex35.c:36:14: warning: unused parameter 'argc' [-Wunused-parame
ter]
 int main(int argc, char *argv[])
          ~~~~^~~~
src/lcthw/ex35.c:36:26: warning: unused parameter 'argv' [-Wunused-parame
ter]
 int main(int argc, char *argv[])
                    ~~~~~~^~~~~~
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/list.o src/lcthw/list.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/hashmap.o src/lcthw/hashmap.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/hashmap_algos.o src/lcthw/hashmap_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/ex36.o src/lcthw/ex36.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/darray.o src/lcthw/darray.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/radixmap.o src/lcthw/radixmap.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/list_algos.o src/lcthw/list_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/bstrlib.o src/lcthw/bstrlib.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols  -fPIC   -c -o src/lcthw/darray_algos.o src/lcthw/darray_algos.c
ar rcs build/liblcthw.a src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/radixmap_tests.c  build/liblcthw.a -o tests/radixmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/darray_algos_tests.c  build/liblcthw.a -o tests/darray_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/hashmap_tests.c  build/liblcthw.a -o tests/hashmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/darray_tests.c  build/liblcthw.a -o tests/darray_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols     tests/hashmap_algos_tests.c  build/liblcthw.a -o tests/hashmap_algos_tests
tests/hashmap_algos_tests.c: In function 'gen_keys':
tests/hashmap_algos_tests.c:86:16: warning: 'stream' may be used uninitia
lized in this function [-Wmaybe-uninitialized]
     if(stream) bsclose(stream);
                ^~~~~~~~~~~~~~~
tests/hashmap_algos_tests.c:88:13: warning: 'key' may be used uninitializ
ed in this function [-Wmaybe-uninitialized]
     if(key) bdestroy(key);
             ^~~~~~~~~~~~~
tests/hashmap_algos_tests.c:89:12: warning: 'result' may be used uninitia
lized in this function [-Wmaybe-uninitialized]
     return result;
            ^~~~~~
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\darray_algos_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/darray_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\hashmap_algos_tests.exe
ALL TESTS PASSED
Tests run: 4
tests/hashmap_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\hashmap_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/hashmap_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex38\tests\radixmap_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/radixmap_tests.exe PASS