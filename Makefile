all: run

run: ./*.c
	gcc -Wall -std=c11 -o run ./*.c