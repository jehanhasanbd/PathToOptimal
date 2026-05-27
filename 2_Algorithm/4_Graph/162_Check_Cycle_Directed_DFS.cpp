#include <iostream>
#include "Graph.h"

using namespace std;

bool dfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited, int source) {
    visited[source] = true;
    dfsVisited[source] = true;

    for (auto neighbour: adjList[source]) {   // take its neighbor
        if (!visited[neighbour]) {                 //if adjacent is not visited
            bool checkCycle = dfs(adjList, visited,dfsVisited, neighbour);   //recursively call DFS-function
                                                                                               //:: {node: neighbour} and {parent: node}
            if (checkCycle) {
                return true;
            }
        }
        else if (dfsVisited[neighbour]) {             // if adjacent is visited and dfsVisited also true
                                                    //-- there is another way to reach that node
            return true;
        }
    }
    dfsVisited[source] = false;                   // when backtrack -> undo the dfsVisited
    return false;

}

bool checkCycleDirectedDFS(unordered_map<int,list<int>> &adjList) {
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            if(dfs(adjList, visited, dfsVisited, node.first)) {    //if there is a cycle :: return true
                return true;
            }
        }
    }
    return false;

}



int main() {
    Graph g;
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
    g.addEdge(3,8,true);
    g.addEdge(8,7,true);
    g.addEdge(3,7,true);
    g.addEdge(2,4,true);
    g.addEdge(4,5,true);
    g.addEdge(5,6,true);
    g.addEdge(6,5,true);


    if(checkCycleDirectedDFS(g.adjList)) {
        cout<<"Cycle Present";
    }
    else {
        cout<<"No cycle";
    }
}

