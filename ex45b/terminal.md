[a@DESKTOP-AAAAAAA ex45b]$ gcc.exe -g -O2 -Wall -Wextra -Isrc -DNDEBUG bin/netclient.c -lm -lWs2_32 build/liblcthw.a -o bin/netclient
[a@DESKTOP-AAAAAAA ex45b]$ bin/netclient.exe learncodethehardway.org 80
GET /ex45.txt HTTP/1.1
Host: learncodethehardway.org

HTTP/1.1 301 Moved Permanently
Server: nginx/1.14.2
Date: Fri, 06 Sep 2019 05:09:31 GMT
Content-Type: text/html
Content-Length: 185
Connection: keep-alive
Location: https://learncodethehardway.org/ex45.txt

<html>
<head><title>301 Moved Permanently</title></head>
<body bgcolor="white">
<center><h1>301 Moved Permanently</h1></center>
<hr><center>nginx/1.14.2</center>
</body>
</html>