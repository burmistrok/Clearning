all: main

main: main.o
	gcc -Wall -g main.o -o main.exe

main.o: main.c
	gcc -c -g -Wall main.c

clean:
	rm -rf *.o main