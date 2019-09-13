[a@DESKTOP-AAAAAAA ex30]$ make clean all
rm -rf build src/libex29.o tests/libex29_tests
rm -f tests/tests.log
find . -name "*.gc*" -exec rm {} \;
rm -rf `find . -name "*.dSYM" -print`
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  -fPIC   -c -o src/libex29.o src/libex29.c
src/libex29.c: In function 'fail_on_purpose':
src/libex29.c:42:33: warning: unused parameter 'msg' [-Wunused-parameter
]
 int fail_on_purpose(const char *msg)
                     ~~~~~~~~~~~~^~~
ar rcs build/libYOUR_LIBRARY.a src/libex29.o
ranlib build/libYOUR_LIBRARY.a
gcc.exe -shared -o build/libYOUR_LIBRARY.so src/libex29.o
gcc.exe -g -O2 -Wall -Wextra -Isrc -Wl,--export-all-symbols -DNDEBUG  build/libYOUR_LIBRARY.a    tests/libex29_tests.c  -ldl  -o tests/libex29_tests
In file included from tests/libex29_tests.c:1:
tests/libex29_tests.c: In function 'main':
tests/minunit.h:16:38: warning: parameter 'argc' set but not used [-Wunu
sed-but-set-parameter]
 #define RUN_TESTS(name) int main(int argc, char *argv[]) {\
                                  ~~~~^~~~
tests/libex29_tests.c:73:1: note: in expansion of macro 'RUN_TESTS'
 RUN_TESTS(all_tests);
 ^~~~~~~~~
sh ./tests/runtests.sh
Running unit tests:
----
RUNNING: C:\a\z\ex30\tests\libex29_tests.exe
A STRING: Hello
HELLO
hello
ALL TESTS PASSED
Tests run: 4
tests/libex29_tests.exe PASS