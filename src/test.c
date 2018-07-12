#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "fila.h"
#include "pilha.h"
#include "grafo.h"

Stack p;
Fila f;

int main(int argc, char const *argv[]){
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "");

	Grafo *g = grafoNew();
	grafoPutVertex(g, 6);
	grafoPutVertex(g, 9);
	grafoPutVertex(g, 346);
	grafoPutVertex(g, 125);
	grafoPutVertex(g, 88);
	grafoPutVertex(g, 655);
	grafoPutArresta(g, 6, 9, 1, 1);
	grafoPutArresta(g, 9, 346, 0, 0);
	grafoShowVertex(g);
	grafoShowArrestas(g);

	/*stackInit(&p);
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
	stackShow(&p);*/
	return 0;
}
