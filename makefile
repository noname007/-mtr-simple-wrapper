
default:
	gcc -std=c99 main.c -o a.out
	#./a.out
	./a.out|sort -k2 -n  
php:
	#php 1.php |sort -k2 -n
	php -S 0.0.0.0:8010
