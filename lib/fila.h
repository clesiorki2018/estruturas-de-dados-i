/*
Adaptação de http://wiki.icmc.usp.br/images/9/9b/AulaFilaDinamica.pdf
Programador: Clesio Maxuel
*/

#ifndef FILA_H
#define FILA_H

#define tipoDadosFila int

typedef struct noFila{
	tipoDadosFila data;
	struct noFila *link;
} NoFila;

typedef struct {
	NoFila *start;
	NoFila *end;	
} Fila;

typedef Fila *fila;

void filaInit(fila f);
void filaInsert(fila f, tipoDadosFila data);
void filaShow(fila f);
tipoDadosFila filaRemove(fila f);
int filaSize(fila f);
int filaEmpty(fila f);

#endif
