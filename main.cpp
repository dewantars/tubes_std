#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    Graph G;

    // Inisialisasi Graph
    initGraph_103022300071(G);

    // Tambah Vertex
    cout << "Menambahkan Vertex A, B, dan C..." << endl;
    addVertex_103022300071(G, 'A');
    addVertex_103022300071(G, 'B');
    addVertex_103022300071(G, 'C');

    // Tambah Edge pada Vertex A
    adrVertex vertexA = firstVertex(G);
    addEdge_103022300071(vertexA, 'B', 5); // A -> B (5)
    addEdge_103022300071(vertexA, 'C', 10); // A -> C (10)

    // Tambah Edge pada Vertex B
    adrVertex vertexB = vertexA->nextVertex;
    addEdge_103022300071(vertexB, 'C', 3); // B -> C (3)

    // Print Graph
    cout << "Mencetak Graph:" << endl;
    print(G);

    // Menguji buildGraph
    cout << "\nMenguji fungsi buildGraph:" << endl;
    buildGraph_103022300071(G);
    print(G);

    return 0;
}
