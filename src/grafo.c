#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


void listPutVertex(ListVertice *lV, Vertice v);
void listPutArresta(ListArresta *lA, Arresta a*);
void listRemoveVertex(ListVertice lV, int idV);
void listRemoveArresta(ListArresta lA, int idA);


void grafoPutVertex(Grafo *g, int id){
}
void grafoPutArresta(Grafo *g, int v1, int v2, int custo);
void grafoDelVertex(Grafo *g, int v);
void grafoDelArresta(Grafo *g, int a);
void grafoShowVertexList(Grafo *g);
void grafoShowArrestasList(Grafo *g);
void grafoShowMatrix(Grafo *g);
