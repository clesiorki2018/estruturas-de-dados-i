#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void stackShow(Stack *p){
	Stack *temp;
	if (stackEmpty(p)) printf("stackEmpty\n");
	else{
		temp = p->next;
		printf("Stack size: %d values: [ ", stackSize(p));
		while(temp != NULL ){
			printf("%d", temp->data);
			temp = temp->next;
			if(temp != NULL) {
				printf(", ");
			}
		}
		printf(" ]\n");
	}
}

int stackSize(Stack *p){
	Stack *temp;
	temp = p->next;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int stackEmpty(Stack *p){
	if (stackSize(p) == 0) return 1;
	else return 0;
}

void stackInit(Stack *p){
	p->next = NULL;
}

void stackPush(Stack *p, int data){
	Stack *temp;

	Stack *new = (Stack*) malloc(sizeof(Stack));
	new->next = NULL;
	new->data = data;

	if(stackEmpty(p)){
		p->next = new;
		p->size++;
	} else {
		temp = p->next;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new;
	}	
}

int stackPop(Stack *p){
	if(stackEmpty(p)) printf("stackEmpty\n");
	else {
		Stack *last = p->next;
		Stack *antLast = p;
		while(last->next != NULL){
			antLast = last;
			last = last->next;
		}
		antLast->next = NULL;
		return last->data;
	}
}