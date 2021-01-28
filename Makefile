all: main

main: Physics.c Board.c main.c
	gcc Physics.c Board.c main.c -o main

clean:
	rm main
	rm *.o
