# Name of the project
PROJ_NAME=fit

# .c files
C_SOURCE=$(wildcard *.c)

# .o files
H_SOURCE=$(wildcard *.h)

# Object files
OBJ=$(C_SOURCE:.c=.o)

# Compiler
CC=gcc

# Compiler flags
CC_FLAGS=-c        \
		 -W        \
		 -Wall     \
		 -ansi     \
		 -pedantic

all: fit

fit: main.o
	gcc -o fit main.o

main.o: main.c
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o fit