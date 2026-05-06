#include <iostream>
#include "Graph.h"

using namespace std;

bool dfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited, int parent, int source) {
    visited[source] = true;

    for (auto neighbour: adjList[source]) {   // take its neighbour
        if (!visited[neighbour]) {                 //if adjacent is not visited
            bool checkCycle = dfs(adjList, visited, source, neighbour);   //recursively call DFS-function
                                                                                               //:: {node: neighbour} and {parent: node}
            if (checkCycle) {
                return true;
            }
        }
        else if (neighbour != parent) {             // if adjacent is visited and isn't child of parent
                                                    //:: mean adj is parent of any other node
                                                    //-- there is another way to reach that node
            return true;
        }
    }
    return false;

}

bool checkCycleUndirDFS(unordered_map<int,list<int>> &adjList) {
    unordered_map<int,bool> visited;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            if(dfs(adjList, visited, -1, node.first)) {    //if there is a cycle :: return true
                return true;
            }
        }
    }
    return false;

}



int main() {
    Graph g;
    g.addEdge(0,1,false);
    g.addEdge(0,2,false);
    g.addEdge(0,7,false);
    g.addEdge(1,4,false);
    g.addEdge(2,4,false);
    g.addEdge(2,3,false);
    g.addEdge(3,5,false);
    g.addEdge(3,6,false);
    g.addEdge(7,6,false);
    if(checkCycleUndirDFS(g.adjList)) {
        cout<<"Cycle Present";
    }
    else {
        cout<<"No cycle";
    }
}

