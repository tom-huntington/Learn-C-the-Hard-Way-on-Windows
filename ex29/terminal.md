$ echo run make on https://github.com/dlfcn-win32/dlfcn-win32
cdlfcn.a file to msys64/mingw64/bin and
dlfcn.h to msys64/mingw64/include
run make on https://github.com/dlfcn-win32/dlfcn-win32 and copy the resulting dlfcn.a file to msys64/mingw64/bin and dlfcn.h to msys64/mingw64/include
$ cc -c libex29.c -o libex29.o
$ cc -shared -o libex29.so libex29.o
$
bash: ./ex29: No such file or directory
$ cc -Wall -g -DNDEBUG ex29.c -ldl -o ex29
$ cc -Wall -g -DNDEBUG ex29.c -ldl -o ex29
A STRING: hello there
$ ./ex29 ./libex29.so uppercase "hello there"
HELLO THERE
$ ./ex29 ./libex29.so lowercase "HELLO tHeRe"
hello there
$ ./ex29 ./libex29.so fail_on_purpose "i fail"
[ERROR] (ex29.c:26: errno: None) Function fail_on_purpose return 1 for data: i fail
$ ./ex29 ./libex29.so fail_on_purpose
[ERROR] (ex29.c:10: errno: None) USAGE: ex29 libex29.so function data
$ ./ex29 ./libex29.so asnesdnseta ansanstena
[ERROR] (ex29.c:21: errno: None) Did not find asnesdnseta function in the library ./libex29.so: "asnesdnseta": The specified procedure could not be found.
$ ./ex29 ./libex.so asnesdnseta ansanstena
[ERROR] (ex29.c:17: errno: None) Failed to open the library ./libex.so: ".\libex.so": The specified module could not be found.