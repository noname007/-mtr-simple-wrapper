
build:
	gcc -std=c99 main.c -o a.exe
run:build
	./a.exe|sort -k2 -n  
php:
	php 1.php |sort -k2 -n
