#include <iostream>
#include "algorithm"
#include "Graph.h"

using namespace std;

int shortestDistanceUndirectedGraph(unordered_map<int,list<int>> &adjList, int source, int dest){
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;

    visited[source] = true;
    parent[source] = -1;
    queue<int> q;
    q.push(source);

    while (!q.empty()){
        int frontNode = q.front();
        q.pop();

        for (auto neighbor: adjList[frontNode]){
            if (!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
                parent[neighbor] = frontNode;
            }
        }
    }

    int path = 0;

    int prevNode = dest;
    while (prevNode != source){
        prevNode = parent[prevNode];
        path++;
    }

    return path;

}

int main()
{
    Graph g;
    g.addEdge(1,2,false);
    g.addEdge(2,3,false);
    g.addEdge(2,4,false);
    g.addEdge(3,4,false);
    g.addEdge(3,7,false);
    g.addEdge(7,6,false);
    g.addEdge(5,6,false);
    g.addEdge(4,5,false);
    cout << shortestDistanceUndirectedGraph(g.adjList,1,5);

}