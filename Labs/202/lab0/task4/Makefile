CC = gcc
CFLAGS = -I
SRC = main.c inc1/math_utils.c inc2/string_utils.c
OBJ = main.o inc1/math_utils.o inc2/string_utils.o

compile: main.o inc1/math_utils.o inc2/string_utils.o
	gcc -o task4_exe main.o inc1/math_utils.o inc2/string_utils.o
	mv ./task4_exe ./build
	mv ./main.o ./build
	mv ./inc1/math_utils.o ./build
	mv ./inc2/string_utils.o ./build	

main.o: main.c
	gcc -c main.c
math_utils.o: math.utils.c
	gcc -c math_utils.c
string_utils.o: string_utils.c
	gcc -c string_utils.c


# (5)
FLAG = 1
ifeq ($(FLAG), 1)
	CFLAGS += -Wall
endif


# (6)
help:
	@echo "The purpose of this Makefile is to compile the following files: main, math_utils, and string_utils."


# (7)
.DEFAULT_GOAL := help0
help0:
	@echo "To get help, write the make command followed by help or compile"


clean:
	rm -f *.o task4_exe 
	rm -f -r build
