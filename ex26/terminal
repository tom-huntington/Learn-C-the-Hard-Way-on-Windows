$ echo could not get glob working in msys2 used msys1. Copy https://raw.githubusercontent
.com/luzexi/MinGW/master/x86/include/glob.h to MinGW/include
could not get glob working in msys2 used msys1. Copy https://raw.githubusercontent.com/luzexi/MinGW/master/x86/include/glob.h to MinGW/include
$ diff logfind.c /c/msys64/home/a/master-learn-c-the-hard-way-lectures/ex26/logfind.3/l
ogfind.c
13c13,14
<     FILE *file = fopen("logfind.txt", "r");
---
>     FILE *file = fopen(".logfind", "r");
>     int glob_flags = GLOB_TILDE;
21c22
<     rc = glob("*.h", 0, NULL, pglob);
---
>     rc = glob("*.h", glob_flags, NULL, pglob);
23c24
<     rc = glob("*.c", GLOB_APPEND, NULL, pglob);
---
>     rc = glob("*.c", glob_flags | GLOB_APPEND, NULL, pglob);
50c51
<             found = strstr(line, search_for[i]);
---
>             found = strcasestr(line, search_for[i]);
$ make logfind
cc     logfind.c   -o logfind
$ logfind.exe main
DEBUG logfind.c:27: Matched file: dbg.h
DEBUG logfind.c:27: Matched file: logfind.c
logfind.c