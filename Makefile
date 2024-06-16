CC = gcc
CFLAGS = -Wall -g # Flags

# main.o: código objeto de main.c
# stack.o: código objeto de stack.c

all: main

main: main.o stack.o
	$(CC) $(CFLAGS) -o main main.o stack.o

main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

valgrind: main
	valgrind --leak-check=full ./main

clean:
	rm -f *.o main