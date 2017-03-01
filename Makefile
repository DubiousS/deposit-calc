all: main.c function.c main.h
	gcc -Wall -o main function.c main.c