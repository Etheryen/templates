.PHONY: main clean

CC = clang

ASM_FLAGS = -S
GENERIC_FLAGS = -std=c99 -Wall -Wextra -pedantic-errors
DEBUG_FLAGS = -O0 -g -fsanitize=address,undefined,leak
RELEASE_FLAGS = -O3 -march=native

CFLAGS = $(GENERIC_FLAGS) $(RELEASE_FLAGS)

ifdef DEBUG
    CFLAGS = $(GENERIC_FLAGS) $(DEBUG_FLAGS)
endif

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f ./main

