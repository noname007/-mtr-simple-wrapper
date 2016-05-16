
default:
	gcc -std=c99 main.c -o a.out
	#./a.out
	./a.out|sort -k2 -n  
