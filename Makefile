prog:functionbr.o main.o
	gcc functionbr.o main.o -o prog -g
main.o:main.c
	gcc -c main.c -g
fonctions.o:fonctions.c
	gcc -c functionbr.c -g

