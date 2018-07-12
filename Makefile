test: pilha.o fila.o test.o grafo.o
	gcc ./obj/pilha.o ./obj/fila.o ./obj/grafo.o ./obj/test.o -o test -I./lib -L./lib -static

pilha.o: ./lib/pilha.h ./src/pilha.c
	gcc -c ./src/pilha.c -o ./obj/pilha.o -I./lib -L./lib

fila.o:  ./lib/fila.h ./src/fila.c
	gcc -c ./src/fila.c -o ./obj/fila.o -I./lib -L./lib

grafo.o: ./lib/grafo.h ./src/grafo.c
	gcc -c ./src/grafo.c -o ./obj/grafo.o -I ./lib -L ./lib

test.o: ./src/test.c
	gcc -c ./src/test.c -o ./obj/test.o -I./lib -L./lib

clean:
	rm test
	rm ./obj/*