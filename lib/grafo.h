/*
Programador: Clesio Maxuel
*/

#ifndef GRAFO_H
#define GRAFO_H
#define MAXIMO 20

typedef struct tipoVertice{
	unsigned int id;
	unsigned short int status;
} Vertice;

typedef struct tipoArresta{
	unsigned int id;
	unsigned int ori;
	Vertice *v1;
	Vertice *v2;
	int custo;
} Arresta;

typedef struct tipoGrafo{
	Vertice v[MAXIMO];
	Arresta a[MAXIMO];
} Grafo;

void grafoPutVertex(Grafo *g, int id);
void grafoPutArresta(Grafo *g, int v1, int v2, int custo);
void grafoDelVertex(Grafo *g, int v);
void grafoDelArresta(Grafo *g, int a);
void grafoShowVertexList(Grafo *g);
void grafoShowArrestasList(Grafo *g);
void grafoShowMatrix(Grafo *g);

#endif
