/*
Autor: Clesio Maxuel
*/

#ifndef PILHA_H
#define PILHA_H

typedef struct no{
	int data;
	unsigned short int size;
	struct no *next;
} Stack;

void stackShow();
void stackInit(Stack *p);
void stackPush(Stack *p, int data);
int stackPop(Stack *p);
int stackEmpty(Stack *p);
int stackSize(Stack *p);

#endif
