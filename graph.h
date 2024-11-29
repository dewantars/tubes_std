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
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct Vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct Graph {
    adrVertex firstVertex;
};

void createVertex_103022300071(char newVertexID, adrVertex &v);
void addVertex_103022300071(Graph &G, char newVertexID);
void initGraph_103022300071(Graph &G);
void buildGraph_103022300071(Graph &G);
void createEdge_103022300071(char newdestVertexID, int newweight, adrEdge &v);
void addEdge_103022300071(adrVertex &L, char newdestVertexID, int newweight);
void print(Graph L);

#endif // GRAPH_H_INCLUDED
