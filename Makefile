CC = gcc
CFLAGS = -Wall -I./src

all: gpio_test run_tests

gpio_test: src/gpio.c src/main.c
	$(CC) $(CFLAGS) src/*.c -o gpio_test

run_tests: src/gpio.c tests/gpio_test.c
	$(CC) $(CFLAGS) src/gpio.c tests/gpio_test.c -o run_tests