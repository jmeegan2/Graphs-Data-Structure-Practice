/*
* Graphs are a data structure that has two componentes
1. A finite set of vertices also called as nodes.
2. A finite set of ordered pair of the form (u, v) called as edge.
*/

/* Real world uses :

The edges may contain weight/value/cost.
Graphs are used to represent many real-life applications: Graphs are used 
to represent networks. The networks may include paths in a city or telephone
network or circuit network. Graphs are also used in social networks like
linkedIn, Facebook. For example, in Facebook, each person is represented 
with a vertex(or node). Each node is a structure and contains information 
like person id, name, gender, and locale

*/
#include <vector>
#include <iostream>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
            << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

// Driver code
int main()
{
   const int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}

/*

Adjacency List:
An array of lists is used. The size of the array is equal to the number of 
vertices. Let the array be an array[]. An entry array[i] represents the 
list of vertices adjacent to the ith vertex. This representation can also 
be used to represent a weighted graph. The weights of edges can be represented
as lists of pairs. Following is the adjacency list representation of the above graph. 

*/