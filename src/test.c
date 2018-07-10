#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "fila.h"
#include "pilha.h"

Stack p;
Fila f;

int main(int argc, char const *argv[]){
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "");

	stackInit(&p);
	filaInit(&f);
	filaRemove(&f);
	filaInsert(&f, 7);
	filaShow(&f);
	filaInsert(&f, 9800);
	filaShow(&f);
	filaInsert(&f, 58);
	filaShow(&f);
	filaRemove(&f);
	filaShow(&f);
	filaInsert(&f, 33);
	filaShow(&f);
	filaRemove(&f);
	filaShow(&f);
	filaRemove(&f);
	filaShow(&f);
	filaRemove(&f);
	filaShow(&f);
	filaRemove(&f);

	int i;
	for (i = 0; i < 99; ++i){
		stackPush(&p, rand() %99);	
	}
	stackShow(&p);
	return 0;
}
