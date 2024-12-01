#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#define idVertex(v) v->idVertex
#define nextVertex(v) v->nextVertex
#define nextEdge(v) v->nextEdge
#define firstEdge(v) v->firstEdge
#define firstVertex(L) L.firstVertex
#define destVertexID(v) v->destVertexID
#define weight(v) v->weight
#include <iostream>
using namespace std;

typedef struct Vertex *adrVertex;
typedef struct Edge *adrEdge;

struct Edge {
    string namaStasiun;
    int jarak;
    int harga;
    adrEdge nextEdge;
};

struct Vertex {
    string nama;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct Graph {
    adrVertex firstVertex;
};

void createVertex(char newVertexID, adrVertex &v);
void addVertex(Graph &G, char newVertexID);
void initGraph(Graph &G);
void buildGraph(Graph &G);
void createEdge(char newdestVertexID, int newweight, adrEdge &v);
void addEdge(adrVertex &L, char newdestVertexID, int newweight);
void print(Graph L);

#endif // GRAPH_H_INCLUDED
