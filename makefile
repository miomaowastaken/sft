output: main.o input.o
	gcc main.o input.o -o output -Wall -Wextra -Wconversion -O2

main.o: main.c input.c
	gcc main.c input.c -c

clean:
	rm main.o input.o output
