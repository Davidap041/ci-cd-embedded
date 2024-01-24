CC=gcc
CFLAGS=-I.

hellomake: hellomake.o func.o
	$(CC) -o hellomake hellomake.o func.o
run: hellomake
	./hellomake
clean:
	rm -f hellomake hellomake.o func.o