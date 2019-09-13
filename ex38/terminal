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

[a@DESKTOP-AAAAAAA ex38]$ ../ex39/tests/hashmap_algos_tests.exe 2> hash.
txt
[a@DESKTOP-AAAAAAA ex38]$ R

R version 3.6.1 (2019-07-05) -- "Action of the Toes"
Copyright (C) 2019 The R Foundation for Statistical Computing
Platform: x86_64-pc-linux-gnu (64-bit)

R is free software and comes with ABSOLUTELY NO WARRANTY.
You are welcome to redistribute it under certain conditions.
Type 'license()' or 'licence()' for distribution details.

  Natural language support but running in an English locale

R is a collaborative project with many contributors.
Type 'contributors()' for more information and
'citation()' on how to cite R or R packages in publications.

Type 'demo()' for some demos, 'help()' for on-line help, or
'help.start()' for an HTML browser interface to help.
Type 'q()' to quit R.

> hash<-read.table("hash.txt", header=T)
> summary(hash)
      FNV              A32            DJB
 Min.   : 931.0   Min.   : 933   Min.   : 929
 1st Qu.: 978.8   1st Qu.: 978   1st Qu.: 981
 Median : 998.5   Median : 999   Median : 994
 Mean   :1000.0   Mean   :1000   Mean   :1000
 3rd Qu.:1017.2   3rd Qu.:1020   3rd Qu.:1018
 Max.   :1091.0   Max.   :1091   Max.   :1090