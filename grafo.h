/*
Programador: Clesio Maxuel
email clesiorki2014@gmail.com
*/

#ifndef GRAFO_H
#define GRAFO_H

typedef struct tipoVertice{
	unsigned int id;
	unsigned short int status;
	struct tipoVertice *ref;
} Vertice;

typedef struct tipoArresta{
	unsigned int orientacao;
	Vertice *v1;
	Vertice *v2;
	int custo;
	struct tipoArresta *ref;
} Arresta;

typedef struct tipoGrafo{
	Vertice *v;
	Arresta *a;
} Grafo;

Grafo * grafoNew(void);
Vertice * grafoGetVertexById(Grafo *g, int id);
void grafoPutVertex(Grafo *g, int id);
void grafoPutArresta(Grafo *g, int v1, int v2, int custo, int orientacao);
void grafoDelVertex(Grafo *g, int v);
void grafoDelArresta(Grafo *g, int v1, int v2);
void grafoShowVertex(Grafo *g);
void grafoShowArrestas(Grafo *g);
void grafoShowMatrix(Grafo *g);
int * grafoGetListVertex(Grafo *g);
int grafoGetSizeOfVertex(Grafo *g);
int grafoGetCustoOfArresta(Grafo *g, int v1, int v2);
#endif
