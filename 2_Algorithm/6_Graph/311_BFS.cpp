#include <iostream>
#include "Graph.h"

using namespace std;

void bfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited, vector<int> &component, int source) {
    visited[source] = true;  // make it visited
    component.push_back(source);

    queue<int> q;
    q.push(source);    //push base in the queue

    while (!q.empty()) {
        int frontNode = q.front();   // take element from queue
        q.pop();

        for (auto neighbour: adjList[frontNode]) {   // take its neighbour
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
                component.push_back(neighbour);
            }
        }
    }
}

vector<vector<int>> BFS(unordered_map<int,list<int>> &adjList) {
    unordered_map<int,bool> visited;
    vector<vector<int>> visitedSeq;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            vector<int> component;
            bfs(adjList, visited, component, node.first);
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
    vector<vector<int>> visitedSeq = BFS(g.adjList);
    printVisitedSeq(visitedSeq);
}

