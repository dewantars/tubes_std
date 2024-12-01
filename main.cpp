#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    Graph G;

    // Inisialisasi Graph
    initGraph(G);

    // Tambah Vertex
    cout << "Menambahkan Vertex A, B, dan C..." << endl;
    addVertex(G, 'A');
    addVertex(G, 'B');
    addVertex(G, 'C');

    // Tambah Edge pada Vertex A
    adrVertex vertexA = firstVertex(G);
    addEdge(vertexA, 'B', 5); // A -> B (5)
    addEdge(vertexA, 'C', 10); // A -> C (10)

    // Tambah Edge pada Vertex B
    adrVertex vertexB = vertexA->nextVertex;
    addEdge(vertexB, 'C', 3); // B -> C (3)

    // Print Graph
    cout << "Mencetak Graph:" << endl;
    print(G);

    // Menguji buildGraph
    cout << "\nMenguji fungsi buildGraph:" << endl;
    buildGraph(G);
    print(G);

    return 0;
}
