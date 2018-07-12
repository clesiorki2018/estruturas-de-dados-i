#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

Grafo* grafoNew(void){
	Grafo *g = (Grafo*) malloc(sizeof(Grafo));
	g->v = NULL;
	g->a = NULL;
	return g;
}

Vertice* grafoGetVertexById(Grafo *g,int id){
	Vertice *tmp = g->v;
	while(tmp->id != id) tmp = tmp->ref;
	return tmp;
}
void grafoPutVertex(Grafo *g, int id){
	Vertice *v = (Vertice*) malloc(sizeof(Vertice));
	v->id = id;
	v->ref = NULL;
	if(g->v == NULL) g->v = v;
	else{
		Vertice *tmp =  g->v;
		while(tmp->ref != NULL) tmp = tmp->ref;
		tmp->ref = v;
		tmp = v;
	}
	printf("Adicionado %d\n", v->id);
}
void grafoPutArresta(Grafo *g, int v1, int v2, int custo, int orientacao){
	Arresta	*a = (Arresta*) malloc(sizeof(Arresta));
	a->ref = NULL;
	a->v1 = grafoGetVertexById(g, v1);
	a->v2 = grafoGetVertexById(g, v2);
	a->custo = custo;
	a->orientacao = orientacao;
	if(g->a == NULL) g->a = a;
	else{
		Arresta *tmp = g->a;
		while(tmp->ref != NULL) tmp = tmp->ref;
		tmp->ref = a;
	}
}

void grafoDelVertex(Grafo *g, int v);
void grafoDelArresta(Grafo *g, int a);

void grafoShowVertex(Grafo *g){
	Vertice *tmp = g->v;
	printf("Vertices: [");
	while(tmp->ref != NULL){
		printf(" %d", tmp->id);		
		if(tmp->ref != NULL) printf(",");
		tmp = tmp->ref;
	}
	printf(" %d ]\n", tmp->id);
}
void grafoShowArrestas(Grafo *g){
	Arresta *tmp = g->a;
	printf("Arrestas: ");
	while(tmp->ref != NULL){
		if(tmp->custo != 0) printf("%d", tmp->custo);
		if(tmp->orientacao == 1)printf("<%d,%d> ", tmp->v1->id, tmp->v2->id);
		else printf("(%d,%d) ", tmp->v1->id, tmp->v2->id);
		tmp = tmp->ref;
	}	
	if(tmp->custo != 0) printf("%d", tmp->custo);
	if(tmp->orientacao == 1)printf("<%d,%d> ", tmp->v1->id, tmp->v2->id);
	else printf("(%d,%d) ", tmp->v1->id, tmp->v2->id);
	printf("\n");
}

void grafoShowMatrix(Grafo *g);
