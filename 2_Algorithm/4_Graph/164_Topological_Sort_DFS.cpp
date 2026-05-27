#include <iostream>
#include "Graph.h"
#include <stack>

using namespace std;

void dfs(unordered_map<int, list<int>> &adjList, unordered_map<int,bool> &visited,stack<int> &st, int source) {
    visited[source] = true;

    for (auto neighbor: adjList[source]) {
        if (!visited[neighbor]) {
            dfs(adjList, visited, st, neighbor);
        }
    }
    st.push(source);
}

vector<int> topologicalSortDFS(unordered_map<int, list<int>> &adjList) {
    unordered_map<int,bool> visited;
    stack<int> st;

    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs(adjList, visited, st, node.first);
        }
    }
    vector<int> topoSortSeq;
    while (!st.empty()) {
        int topNode = st.top();
        st.pop();

        topoSortSeq.push_back(topNode);
    }
    return topoSortSeq;
}

int main() {
    Graph g;
    g.addEdge(1,2, true);
    g.addEdge(1,3, true);
    g.addEdge(2,4, true);
    g.addEdge(2,5, true);
    g.addEdge(3,6, true);
    g.addEdge(4,7, true);
    g.addEdge(5,7, true);
    g.addEdge(6,5, true);
    g.addEdge(6,7, true);

    vector<int> topoSortSeq = topologicalSortDFS(g.adjList);
    printSeq(topoSortSeq);
}