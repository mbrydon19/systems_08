all: main.o sieve.o
	gcc -o test main.o sieve.o

main.o: main.c sieve.h
	gcc -c main.c sieve.h

sieve.o: sieve.h sieve.c
	gcc -c sieve.h sieve.c

run:
	./test

clean:
	rm *.o
