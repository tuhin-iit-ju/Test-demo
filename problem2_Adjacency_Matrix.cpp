// #include<bits/stdc++.h>
// using namespace std;

// const int Max_VERTICES = 10;

// class Graph{
//     int adj[Max_VERTICES][Max_VERTICES];
//     int vertices;
//     bool isDirected;
    
//     public:
//     Graph(int v,bool directed){
//         vertices = v;
//         isDirected = directed;

//         for(int i=0;i<vertices;i++){
//             for(int j=0;j<vertices;j++){
//                 adj[i][j] = 0;
//             }
//         }
//     }

//     void addEdge(int u,int v){
//         adj[u][v] = 1;

//         if(!isDirected){
//             adj[v][u] = 1;
//         }
//     }

//     void printGraph(){
//         cout<<"Adjacency Matrix: "<<endl;
//         for(int i=0;i<vertices;i++){
//             for(int j=0;j<vertices;j++){
//                 cout<<adj[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// };

// int main(){
//     int vertices,edges,directed;
//     cout<<"Enter number of vertices: ";
//     cin>>vertices;

//     cout<<"Enter number of edges: ";
//     cin>>edges;

//     cout<<"Is the graph directes?(1 = Yes, 0 = No): ";
//     cin>>directed;

//     Graph g(vertices,directed);

//     cout<<"Enter edges(u v): "<<endl;
//     for(int i=0;i<edges;i++){
//         int u,v;
//         cin>>u>>v;
//         g.addEdge(u,v);
//     }

//     g.printGraph();


//     return 0;
// }
#include <iostream>
using namespace std;

const int MAX_VERTICES = 5; // total number of vertices
int adjMatrix[MAX_VERTICES][MAX_VERTICES]; // adjacency matrix

// Print the adjacency matrix
void printMatrix(int vertices) {
    cout << "\nAdjacency Matrix:\n    ";
    for (int i = 0; i < vertices; i++) {
        cout << i << " ";
    }
    cout << "\n";

    for (int i = 0; i < vertices; i++) {
        cout << i << " : ";
        for (int j = 0; j < vertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int vertices = 5;
    bool isDirected = false; // Change to true for directed graph

    // Initialize matrix with 0
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }

    // Define edges directly in main (u, v)
    int edges[][2] = {
        {0, 1},
        {0, 4},
        {1, 2},
        {1, 3},
        {1, 4},
        {2, 3},
        {3, 4}
    };

    int numEdges = sizeof(edges) / sizeof(edges[0]);

    // Add edges to the matrix
    for (int i = 0; i < numEdges; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjMatrix[u][v] = 1;
        if (!isDirected) {
            adjMatrix[v][u] = 1;
        }
    }

    // Print the matrix
    printMatrix(vertices);

    return 0;
}
