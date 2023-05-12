output: main.o second.o
	g++ main.o second.o -o output -Wall -Wextra -Wconversion -O2

main.o: main.cpp second.c
	g++ main.cpp second.c -c

clean:
	rm main.o second.o output
