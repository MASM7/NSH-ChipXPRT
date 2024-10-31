CC = gcc
CFLAGS = 
OPTIMIZE = 1

math: main.o math/src/math.o
	gcc -o math main.o math.c
main.o: main.c
	gcc - c main.c
math/src/math.o: main.o math/src/math.c
	gcc -c math.c

io: main.o io/src/io.o
        gcc -o io main.o io.c
io/src/io.o: main.o io/src/io.c
        gcc -c io.c

utils: main.o utils/src/utils.o
        gcc -o utils main.o utils.c
utils/src/utils.o: main.o utils/src/utils.c
        gcc -c utils.c

EXTRA = 1

If EXTRA == 1 {
extra: main.o /src/extra.o
        gcc -o extra main.o extra.c
extra/src/extra.o: main.o extra/src/extra.c
        gcc -c extra.c
}

clean:
	rm -f *.o 
