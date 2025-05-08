all: fit

fit: main.o
	gcc -o fit main.o

main.o: main.c
	gcc -o main.o -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o fit