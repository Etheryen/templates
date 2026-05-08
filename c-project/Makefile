.PHONY: main clean

CC = clang
CFLAGS = -Wall -Wextra -Wpedantic -fsanitize=address,undefined,leak

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f ./main

