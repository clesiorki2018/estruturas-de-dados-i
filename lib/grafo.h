/*
Programador: Clesio Maxuel
*/

#ifndef GRAFO_H
#define GRAFO_H

typedef struct tipoVertice{
	unsigned int id;
	unsigned short int status;
	struct tipoVertice *ref;
} Vertice;

typedef struct tipoListVertice{
	Vertice *start;
	Vertice *next;	
} ListVertice;

typedef struct tipoArresta{
	unsigned int id;
	unsigned int ori;
	Vertice *v1;
	Vertice *v2;
	int custo;
	struct tipoArresta *ref;
} Arresta;

typedef struct tipoListArresta{
	Arresta *start;
	Arresta *next;
} ListArresta;

typedef struct tipoGrafo{
	ListVertice *v;
	ListArresta *a;
} Grafo;


void listPutVertex(ListVertice *lV, Vertice v);
void listPutArresta(ListArresta *lA, Arresta a*);
void listRemoveVertex(ListVertice lV, int idV);
void listRemoveArresta(ListArresta lA, int idA);
void listInitVertex(ListVertice *lV);
void listInitVertex(ListArresta *lA);
int listCheckEmptyVertex(ListVertice lV);
int listCheckEmptyArresta(ListArresta lA);
int listGetSizeVertex(ListVertice lV);
int listGetSizeArresta(ListArresta lA);

void grafoInit(Grafo *g);
void grafoPutVertex(Grafo *g, int id);
void grafoPutArresta(Grafo *g, int v1, int v2, int custo);
void grafoDelVertex(Grafo *g, int v);
void grafoDelArresta(Grafo *g, int a);
void grafoShowVertexList(Grafo *g);
void grafoShowArrestasList(Grafo *g);
void grafoShowMatrix(Grafo *g);

#endif
