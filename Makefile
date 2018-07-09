
test: test.o pilha.o
	gcc ./obj/test.o ./obj/pilha.o -o test -I./lib -L./lib -static

pilha.o: ./lib/pilha.h ./src/pilha.c
	gcc -c ./src/pilha.c -o ./obj/pilha.o -I./lib -L./lib

test.o: ./src/test.c
	gcc -c ./src/test.c -o ./obj/test.o -I./lib -L./lib

clean:
	rm test
	rm ./obj/*