#include "graph.h"

void createVertex_103022300071(char newVertexID, adrVertex &v) {
    v = new Vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;
}

void createEdge_103022300071(char newdestVertexID, int newweight, adrEdge &v){
    v = new Edge;
    destVertexID(v) = newdestVertexID;
    weight(v) = newweight;
    nextEdge(v) = NULL;
}

void initGraph_103022300071(Graph &G) {
    firstVertex(G) = NULL;
}

void addVertex_103022300071(Graph &G, char newVertexID) {
    adrVertex newVertex;
    createVertex_103022300071(newVertexID, newVertex);

    if (firstVertex(G) == NULL) {
        firstVertex(G) = newVertex;
    } else {
        adrVertex temp = firstVertex(G);
        while (nextVertex(temp) != NULL) {
            temp = nextVertex(temp);
        }
        nextVertex(temp) = newVertex;
    }
}

void addEdge_103022300071(adrVertex &L, char newdestVertexID, int newweight){
    adrEdge A;
    createEdge_103022300071(newdestVertexID, newweight, A);
    if (firstEdge(L) == NULL){
        firstEdge(L) = A;
    }else{
        adrEdge temp = firstEdge(L);
        while (nextEdge(temp) != NULL){
            temp = nextEdge(temp);
        }
        nextEdge(temp) = A;
    }
}

void buildGraph_103022300071(Graph &G) {

    char newVertexID;
    cout << "Masukkan ID simpul (huruf A-Z). Ketikkan karakter lain selain huruf untuk berhenti." << endl;
    cin >> newVertexID;
    while ((newVertexID >= 'A' && newVertexID <= 'Z') || (newVertexID >= 'a' && newVertexID <= 'z')) {
        if (newVertexID >= 'a' && newVertexID <= 'z') {
            newVertexID -= 32;
        }
        bool isDuplicate = false;
        adrVertex temp = firstVertex(G);
        while (temp != NULL) {
            if (idVertex(temp) == newVertexID) {
                isDuplicate = true;
                break;
            }
            temp = nextVertex(temp);
        }

        if (!isDuplicate) {
            addVertex_103022300071(G, newVertexID);
        }
        cin >> newVertexID;
    }
}

void print(Graph L){
    if (firstVertex(L) == NULL){
        cout << "list kosong" << endl;
    }else{
        adrVertex v = firstVertex(L);
        while (v != NULL){
            cout << "Vertex: " << idVertex(v) << endl;
            adrEdge e = firstEdge(v);
            while (e != NULL){
                cout << "  - destVertexID: " << destVertexID(e) << endl
                     << "  - weight: " << weight(e) << endl;
                e = nextEdge(e);
            }
            v = nextVertex(v);
        }
    }
}
