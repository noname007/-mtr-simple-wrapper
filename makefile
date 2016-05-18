
build:
	gcc -std=c99 -DDEBUG_LEVEL=LOG_ALL main.c -o a.exe
run:build
	./a.exe|sort -k2 -n  
php:
	#php 1.php |sort -k2 -n
	php -S 0.0.0.0:8010
