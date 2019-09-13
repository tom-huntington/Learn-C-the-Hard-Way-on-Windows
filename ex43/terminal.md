[a@DESKTOP-AAAAAAA ex43]$ make
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/stats.o src/lcthw/stats.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/string_algos.o src/lcthw/string_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/lcthw/bstrlib.o src/lcthw/bstrlib.c
ar rcs build/liblcthw.a src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/radixmap_tests.c  build/liblcthw.a -o tests/radixmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/darray_algos_tests.c  build/liblcthw.a -o tests/darray_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/stack_tests.c  build/liblcthw.a -o tests/stack_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/string_algos_tests.c  build/liblcthw.a -o tests/string_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/hashmap_tests.c  build/liblcthw.a -o tests/hashmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/queue_tests.c  build/liblcthw.a -o tests/queue_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/darray_tests.c  build/liblcthw.a -o tests/darray_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/bstree_tests.c  build/liblcthw.a -o tests/bstree_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/hashmap_algos_tests.c  build/liblcthw.a -o tests/hashmap_algos_tests
tests/hashmap_algos_tests.c: In function 'gen_keys':
tests/hashmap_algos_tests.c:86:16: warning: 'stream' may be used uniniti
alized in this function [-Wmaybe-uninitialized]
     if(stream) bsclose(stream);
                ^~~~~~~~~~~~~~~
tests/hashmap_algos_tests.c:88:13: warning: 'key' may be used uninitiali
zed in this function [-Wmaybe-uninitialized]
     if(key) bdestroy(key);
             ^~~~~~~~~~~~~
tests/hashmap_algos_tests.c:89:12: warning: 'result' may be used uniniti
alized in this function [-Wmaybe-uninitialized]
     return result;
            ^~~~~~
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/stats_tests.c  build/liblcthw.a -o tests/stats_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\bstree_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/bstree_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\darray_algos_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/darray_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\hashmap_algos_tests.exe
ALL TESTS PASSED
Tests run: 4
tests/hashmap_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\hashmap_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/hashmap_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\queue_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/queue_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\radixmap_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/radixmap_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\stack_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/stack_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\stats_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/stats_tests.exe PASS
----
RUNNING: C:\a\learn-c-the-hard-way-on-windows\ex43\tests\string_algos_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/string_algos_tests.exe PASS