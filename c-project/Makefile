.PHONY: main clean

CC = clang

GENERIC_FLAGS = -std=c99 -Wall -Wextra -Wpedantic
DEBUG_FLAGS = -O0 -g -fsanitize=address,undefined,leak
RELEASE_FLAGS = -O3

CFLAGS = $(GENERIC_FLAGS) $(RELEASE_FLAGS)

ifdef DEBUG
    CFLAGS = $(GENERIC_FLAGS) $(DEBUG_FLAGS)
endif

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f ./main

