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
	if (filaEmpty(f)){
		f->start = p;
		f->end = p;
	} else {
		f->end->link = p;
		f->end = p;
	}
}

tipoDadosFila* filaRemove(fila f){
	NoFila *p;
	tipoDadosFila* data;
	if(filaEmpty(f)) return NULL;
	else{
		data = &f->start->data;
		p = f->start->link;
		f->start = p;
		if (f->start == NULL) f->end == NULL;
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
	return count;
}
