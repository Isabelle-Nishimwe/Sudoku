CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -g -O0
LDFLAGS = -lm -lpthread

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
TARGET = sudoku

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

run_valgrind: $(TARGET)
	valgrind --tool=memcheck --leak-check=yes --leak-resolution=low --show-reachable=yes ./$(TARGET)

clean:
	rm -f src/*.o $(TARGET)

.PHONY: all run run_valgrind clean
