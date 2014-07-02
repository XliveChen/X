all:test.c
	gcc -Wall -o test test.c
preprocess:
	gcc -o test.p -E test.c
compile:
	gcc -S test.c
assemble:
	gcc -C test.c
clean:
	rm test test.p test.s test.o
