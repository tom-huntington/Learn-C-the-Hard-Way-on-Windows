[a@DESKTOP-AAAAAAA ex47]$ make clean all
rm -rf build src/lcthw/tstree.o src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/ringbuffer.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o tests/list_tests tests/list_algos_tests tests/radixmap_tests tests/darray_algos_tests tests/stack_tests tests/string_algos_tests tests/hashmap_tests tests/ringbuffer_tests tests/queue_tests tests/darray_tests tests/tstree_tests tests/bstree_tests tests/hashmap_algos_tests tests/stats_tests bin/urlor
rm -f tests/tests.log
find . -name "*.gc*" -exec rm {} \;
rm -rf `find . -name "*.dSYM" -print`
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/tstree.o src/lcthw/tstree.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/ex35.o src/lcthw/ex35.c
src/lcthw/ex35.c: In function 'main':
src/lcthw/ex35.c:36:14: warning: unused parameter 'argc' [-Wunused-param
eter]
 int main(int argc, char *argv[])
          ~~~~^~~~
src/lcthw/ex35.c:36:26: warning: unused parameter 'argv' [-Wunused-param
eter]
 int main(int argc, char *argv[])
                    ~~~~~~^~~~~~
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/list.o src/lcthw/list.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/hashmap.o src/lcthw/hashmap.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/hashmap_algos.o src/lcthw/hashmap_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/ex36.o src/lcthw/ex36.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/darray.o src/lcthw/darray.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/bstree.o src/lcthw/bstree.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/radixmap.o src/lcthw/radixmap.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/list_algos.o src/lcthw/list_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/stats.o src/lcthw/stats.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/ringbuffer.o src/lcthw/ringbuffer.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/string_algos.o src/lcthw/string_algos.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/bstrlib.o src/lcthw/bstrlib.c
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG  -fPIC   -c -o src/lcthw/darray_algos.o src/lcthw/darray_algos.c
ar rcs build/liblcthw.a src/lcthw/tstree.o src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/ringbuffer.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
ranlib build/liblcthw.a
gcc.exe -shared -o build/liblcthw.so src/lcthw/tstree.o src/lcthw/ex35.o src/lcthw/list.o src/lcthw/hashmap.o src/lcthw/hashmap_algos.o src/lcthw/ex36.o src/lcthw/darray.o src/lcthw/bstree.o src/lcthw/radixmap.o src/lcthw/list_algos.o src/lcthw/stats.o src/lcthw/ringbuffer.o src/lcthw/string_algos.o src/lcthw/bstrlib.o src/lcthw/darray_algos.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/list_tests.c  -lm build/liblcthw.a -o tests/list_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/list_algos_tests.c  -lm build/liblcthw.a -o tests/list_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/radixmap_tests.c  -lm build/liblcthw.a -o tests/radixmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/darray_algos_tests.c  -lm build/liblcthw.a -o tests/darray_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/stack_tests.c  -lm build/liblcthw.a -o tests/stack_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/string_algos_tests.c  -lm build/liblcthw.a -o tests/string_algos_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/hashmap_tests.c  -lm build/liblcthw.a -o tests/hashmap_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/ringbuffer_tests.c  -lm build/liblcthw.a -o tests/ringbuffer_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/queue_tests.c  -lm build/liblcthw.a -o tests/queue_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/darray_tests.c  -lm build/liblcthw.a -o tests/darray_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/tstree_tests.c  -lm build/liblcthw.a -o tests/tstree_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/bstree_tests.c  -lm build/liblcthw.a -o tests/bstree_tests
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/hashmap_algos_tests.c  -lm build/liblcthw.a -o tests/hashmap_algos_tests
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
gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     tests/stats_tests.c  -lm build/liblcthw.a -o tests/stats_tests
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\z\ex47\tests\bstree_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/bstree_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\darray_algos_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/darray_algos_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\darray_tests.exe
ALL TESTS PASSED
Tests run: 8
tests/darray_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\hashmap_algos_tests.exe
ALL TESTS PASSED
Tests run: 4
tests/hashmap_algos_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\hashmap_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/hashmap_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\list_algos_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/list_algos_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\list_tests.exe
ALL TESTS PASSED
Tests run: 6
tests/list_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\queue_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/queue_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\radixmap_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/radixmap_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\ringbuffer_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/ringbuffer_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\stack_tests.exe
ALL TESTS PASSED
Tests run: 3
tests/stack_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\stats_tests.exe
ALL TESTS PASSED
Tests run: 2
tests/stats_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\string_algos_tests.exe
ALL TESTS PASSED
Tests run: 1
tests/string_algos_tests.exe PASS
----
RUNNING: C:\a\z\ex47\tests\tstree_tests.exe
ALL TESTS PASSED
Tests run: 5
tests/tstree_tests.exe PASS

gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG     bin/urlor.c  -lm build/liblcthw.a -o bin/urlor
[a@DESKTOP-AAAAAAA bin]$ ./urlor.exe urls.txt
URL> /
MATCH: / == MainApp
URL> /hello
MATCH: /hello == Hello
URL> /hello/zed
No match found. Trying prefix.
MATCH: /hello/zed == Hello
URL> /album
No match found. Trying prefix.
MATCH: /album == Album
URL> /ablum/12345
No match found. Trying prefix.
MATCH: /ablum/12345 == MainApp
URL> /ablum/
No match found. Trying prefix.
MATCH: /ablum/ == MainApp
URL> [a@DESKTOP-AAAAAAA bin]$ vim urls.txt
[a@DESKTOP-AAAAAAA bin]$ ./urlor.exe urls.txt
URL> /album
No match found. Trying prefix.
MATCH: /album == Album
URL> /album/
MATCH: /album/ == Album
URL> /album/12345
No match found. Trying prefix.
MATCH: /album/12345 == Album
[a@DESKTOP-AAAAAAA bin]$ ./urlor.exe urls.txt
URL> asansastasta
No match found. Trying prefix.
FAIL: asansastasta
URL> /satseansasa
No match found. Trying prefix.
MATCH: /satseansasa == MainApp