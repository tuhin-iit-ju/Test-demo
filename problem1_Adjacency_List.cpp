// #include <iostream>
// using namespace std;
// const int MAX_VERTICES = 10;
// const int MAX_EDGES = 10;
// int adj[MAX_VERTICES][MAX_EDGES]; // Adjacency list
// int count[MAX_VERTICES];          // Number of neighbors per vertex
// int vertices;
// bool isDirected;
// void initializeGraph(int v, bool directed) {
//     vertices = v;
//     isDirected = directed;
//     for (int i = 0; i < vertices; i++) {
//         count[i] = 0;
//         for (int j = 0; j < MAX_EDGES; j++) {
//             adj[i][j] = -1; // -1 indicates no connection
//         }
//     }
// }
// void addEdge(int u, int v) {
//     adj[u][count[u]++] = v;
//     if (!isDirected) {
//         adj[v][count[v]++] = u;
//     }
// }
// void printGraph() {
//     for (int i = 0; i < vertices; i++) {
//         cout << "Vertex " << i << ": ";
//         for (int j = 0; j < count[i]; j++) {
//             cout << adj[i][j] << " -> ";
//         }
//         cout << "NULL" << endl;
//     }
// }
// int main() {
//     int edges;
//     cout << "Enter number of vertices and edges: ";
//     cin >> vertices>>edges;
//     cout << "Is the graph directed? (1 = Yes, 0 = No): ";
//     cin >> isDirected;
//     initializeGraph(vertices, isDirected);
//     cout << "Enter edges (u v):" << endl;
//     for (int i = 0; i < edges; i++) {
//         int u, v;
//         cin >> u >> v;
//         addEdge(u, v);
//     }
//     cout << "\nAdjacency List of the Graph:" << endl;
//     printGraph();

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v, bool directed = false) {
    adjList[u].push_back(v);  // Add v to u's list
    if (!directed) {
        adjList[v].push_back(u);  // Add u to v's list for undirected graph
    }
}

void printGraph(vector<int> adjList[], int V) {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ":";
        for (int neighbor : adjList[i]) {
            cout << " -> " << neighbor;
        }
        cout << endl;
    }
}

int main() {
    int V = 5; // Number of vertices

    // Create an array of vectors (adjacency list)
    vector<int> adjList[V];

    // Add edges
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 4);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 4);

    // Print the graph
    printGraph(adjList, V);

    return 0;
}
