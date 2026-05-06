#include <iostream>
#include "Graph.h"

using namespace std;

bool bfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited, unordered_map<int,int> &parents, int source) {
    visited[source] = true;  // make it visited
    parents[source] = -1;

    queue<int> q;
    q.push(source);    //push base in the queue

    while (!q.empty()) {
        int frontNode = q.front();   // take element from queue
        q.pop();

        for (auto neighbour: adjList[frontNode]) {   // take its neighbor of frontnode
            if (!visited[neighbour]) {                 // if not visited: make it visited {parent of neighbor =  frontNode}
                q.push(neighbour);
                visited[neighbour] = true;
                parents[neighbour] = frontNode;
            }
            else if (parents[neighbour] != frontNode) {   // if visted & {parent of neighbor !=  frontNode} :: its cycle
                return true;
            }
        }
    }
    return false;
}

bool CheckCycleBFS(unordered_map<int,list<int>> &adjList) {
    unordered_map<int,bool> visited;
    unordered_map<int,int> parents;                      //track every node's parent
    for (auto node: adjList) {
        if (!visited[node.first]) {
            if(bfs(adjList, visited, parents, node.first)) {
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
    if(CheckCycleBFS(g.adjList)) {
        cout<<"Cycle Present";
    }
    else {
        cout<<"No cycle";
    }
}

