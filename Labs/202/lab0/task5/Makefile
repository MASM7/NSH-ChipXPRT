# Define variablies

CC = gcc
CFLAGS = -I.

FLAG = 1
ifeq ($(FLAG), 1)
        CFLAGS += -Wall
endif

SRC = ../task4/main.c ../task4/inc1/math_utils.c ../task4/inc2/string_utils.c
OBJ = ../task4/main.o ../task4/inc1/math_utils.o ../task4/inc2/string_utils.o


# Default target
.DEFAULT_GOAL := all
all: $(task5_exe)
	./task5_exe

# Link object and executable files
$(task5_exe): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run:
	./task5.exe


help:
        @echo "The purpose of this Makefile is to compile the following files: main, math_utils, and string_utils."


clean:
	rm -f $(OBJ) $(task5_exe)
