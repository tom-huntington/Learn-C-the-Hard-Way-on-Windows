[a@DESKTOP-AAAAAAA liblcthw]$ sudo make install
[sudo] password for a:
ar rcs build/liblcthw.a src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/tstree.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/ringbuffer.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/tstree.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/ringbuffer.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_tests.c  build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/list_algos_tests.c  build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/string_algos_tests.c  build/liblcthw.a -o tests/string_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/radixmap_tests.c  build/liblcthw.a -o tests/radixmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/darray_algos_tests.c  build/liblcthw.a -o tests/darray_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/stack_tests.c  build/liblcthw.a -o tests/stack_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/hashmap_tests.c  build/liblcthw.a -o tests/hashmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/ringbuffer_tests.c  build/liblcthw.a -o tests/ringbuffer_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/queue_tests.c  build/liblcthw.a -o tests/queue_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/darray_tests.c  build/liblcthw.a -o tests/darray_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG     tests/tstree_tests.c  build/liblcthw.a -o tests/tstree_tests
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
RUNNING: C:\a\z\liblcthw\tests\bstree_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/bstree_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\darray_algos_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/darray_algos_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\hashmap_algos_tests.exe
ALL TESTS PASSED
Tests run: 4
tests/hashmap_algos_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\hashmap_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/hashmap_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\queue_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/queue_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\radixmap_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/radixmap_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\ringbuffer_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/ringbuffer_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\stack_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/stack_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\stats_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/stats_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\string_algos_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/string_algos_tests.exe PASS
----
RUNNING: C:\a\z\liblcthw\tests\tstree_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/tstree_tests.exe PASS

install -d //mnt/c/a/usr/local/lib/
install build/liblcthw.a //mnt/c/a/usr/local/lib/
install -d //mnt/c/a/usr/local/include/lcthw/
install src/lcthw/hashmap.h src/lcthw/dbg.h src/lcthw/queue.h src/lcthw/darray.h src/lcthw/ringbuffer.h src/lcthw/bstree.h src/lcthw/list.h src/lcthw/sort.h src/lcthw/tstree.h src/lcthw/hashmap_algos.h src/lcthw/stats.h src/lcthw/string_algos.h src/lcthw/bstrlib.h src/lcthw/radixmap.h src/lcthw/darray_algos.h src/lcthw/stack.h src/lcthw/list_algos.h //mnt/c/a/usr/local/include/lcthw/