#include <iostream>
#include "Graph.h"

using namespace std;

void dfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited, vector<int> &component, int source) {
    component.push_back(source);
    visited[source] = true;

    for (auto neighbour: adjList[source]) {   // take its neighbour
        if (!visited[neighbour]) {
            dfs(adjList, visited, component, neighbour);
        }
    }

}

vector<vector<int>> DFS(unordered_map<int,list<int>> &adjList) {
    unordered_map<int,bool> visited;
    vector<vector<int>> visitedSeq;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            vector<int> component;
            dfs(adjList, visited, component, node.first);
            visitedSeq.push_back(component);
        }
    }
    return visitedSeq;
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
    vector<vector<int>> visitedSeq = DFS(g.adjList);
    printVisitedSeq(visitedSeq);
}

