#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


void filaInit(fila f){
	f->start = NULL;
	f->end = NULL;
}

int filaEmpty(fila f){
	if (f->start == NULL) return 1;
	else return 0;
}

void filaShow(fila f){
	NoFila *p;
	p = f->start;
	printf("\n Fila size: %d itens: [ ", filaSize(f));
	while(p != NULL){
		printf(" %d", p->data); /* Vai Bugar aqui*/
		if (p != NULL) printf(",");
		p = p->link;
	}
	printf(" ]\n");

}

void filaInsert(fila f, tipoDadosFila data){
	NoFila *p =(NoFila*) malloc(sizeof(NoFila));
	p->data = data;
	p->link = NULL;
	if (filaEmpty(f)) f->start = p;
	else f->end->link = p;
}

tipoDadosFila filaRemove(fila f){
	NoFila *p;
	if(filaEmpty(f)){
		p->data = (tipoDadosFila) 0;
			return p->data;
	} else{
		p = f->start;
		tipoDadosFila data = p->data;
		if (f->start == NULL) f->end == NULL;
		free(p);
		return data;
	}
}


int filaSize(fila f){
	NoFila *p;
	unsigned short int count;

	p = f->start;
	while(p != NULL){
		count++;
		p = p->link;
	}
}
