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