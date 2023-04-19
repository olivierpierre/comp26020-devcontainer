all: prog

prog: main.o network.o parser.o
	gcc main.o network.o parser.o -o prog

main.o: main.c network.h parser.h
	gcc -c main.c -o main.o

network.o: network.c network.h
	gcc -c network.c -o network.o

parser.o: parser.c parser.h network.h
	gcc -c parser.c -o parser.o

clean:
	rm -rf *.o prog
