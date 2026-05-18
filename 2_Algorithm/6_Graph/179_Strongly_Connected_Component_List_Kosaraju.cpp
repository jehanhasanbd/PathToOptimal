#include <iostream>
#include <stack>
#include "Graph.h"

using ADJ_LIST = unordered_map<int,list<int>>;

using BOOL_MAP = unordered_map<int,bool>;
using VEC_OF_VEC = vector<vector<int>>;
using VEC = vector<int>;
using VEC_BOOL = vector<bool>;

using namespace std;

void dfs_vanilla(ADJ_LIST &adjList, BOOL_MAP &visited, VEC &component,int source) {
    visited[source] = true;
    component.push_back(source);
    for (auto neighbor: adjList[source]) {
        if (!visited[neighbor]) {
            dfs_vanilla(adjList,visited,component,neighbor);
        }
    }
}

void dfs_topoSort(ADJ_LIST &adjList, BOOL_MAP &visited,stack<int> &st, int source) {
    visited[source] = true;

    for (auto neighbor: adjList[source]) {
        if (!visited[neighbor]) {
            dfs_topoSort(adjList,visited,st,neighbor);
        }
    }
    st.push(source);
}

VEC_OF_VEC strongly_Connected_Componant_Kosaraju(ADJ_LIST &adjList) {
    BOOL_MAP visited;
    stack<int> st;

    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs_topoSort(adjList,visited,st,node.first);
        }
    }

    for (auto &x : visited) {
        x.second = false;
    }

    ADJ_LIST reverseAdjList = Graph::makeReverseAdjList(adjList);

    VEC_OF_VEC components;

    while (!st.empty()) {
        int topNode = st.top();
        st.pop();

        if (!visited[topNode]) {
            VEC component;
            dfs_vanilla(reverseAdjList,visited,component,topNode);
            components.push_back(component);
        }
    }
    return components;
}

int main() {
    Graph g;
    g.addEdge(0,1,true);
    g.addEdge(1,2,true);
    g.addEdge(2,3,true);
    g.addEdge(3,0,true);
    g.addEdge(2,4,true);
    g.addEdge(4,5,true);
    g.addEdge(5,6,true);
    g.addEdge(6,4,true);
    g.addEdge(6,7,true);

    VEC_OF_VEC components = strongly_Connected_Componant_Kosaraju(g.adjList);
    printVisitedSeq(components);
}