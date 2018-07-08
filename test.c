#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "pilha.h"

Stack p;

int main(int argc, char const *argv[]){
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "");

	stackInit(&p);

	int i;
	for (i = 0; i < 99; ++i){
		stackPush(&p, rand() %99);	
	}
	stackShow(&p);
	return 0;
}
