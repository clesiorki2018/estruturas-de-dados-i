test: pilha.o fila.o test.o grafo.o
	gcc pilha.o fila.o grafo.o test.o -o test -static
	rm *.o

pilha.o: pilha.h pilha.c
	gcc -c pilha.c 

fila.o: fila.h fila.c
	gcc -c fila.c

grafo.o: grafo.h grafo.c
	gcc -c grafo.c

test.o: test.c
	gcc -c test.c

clean:
	rm test