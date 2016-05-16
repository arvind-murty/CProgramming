


a.out : line.o word.o main.o
	cc line.o word.o main.o


line.o : line.c line.h
	cc -c line.c -o line.o


word.o : word.c word.h
	cc -c word.c -o word.o


main.o : main.c line.h word.h
	cc -c main.c -o main.o


