#include <iostream>
#include "stack"
#include "WeightedGraph.h"
using namespace std;

using ADJLIST =  unordered_map<int, list<pair<int,int>>>;
using BOOLMAP =  unordered_map<int, bool>;
using INTMAP = unordered_map<int,int>;




void dfs_for_topological_sort(ADJLIST &adjList,BOOLMAP &visited, stack<int> &st, int source) {
    visited[source] = true;

    for (auto neighbor: adjList[source]) {
        if (!visited[neighbor.first]) {
            dfs_for_topological_sort(adjList, visited, st, neighbor.first);
        }
    }

    st.push(source);
}

INTMAP shortedDistanceFromSourceToAllNode(ADJLIST &adjList, int source) {
    BOOLMAP visited;
    stack<int> st;

    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs_for_topological_sort(adjList, visited, st, node.first);
        }
    }

    INTMAP distance;
    for (auto node: adjList) {
        distance[node.first] = INT_MAX;
    }

    distance[source] = 0;
    while (!st.empty()) {
        int topVal = st.top();
        st.pop();

        for (auto neighbor: adjList[topVal]) {
            if (distance[topVal] != INT_MAX) {
                distance[neighbor.first] = min(distance[neighbor.first], distance[topVal] + neighbor.second);
            }
        }
    }
    return distance;

}

int main() {
    WeightedGraph wg;
    wg.addEdge(0,1,5,true);
    wg.addEdge(0,2,3,true);
    wg.addEdge(1,2,2,true);
    wg.addEdge(1,3,6,true);
    wg.addEdge(2,3,7,true);
    wg.addEdge(2,4,4,true);
    wg.addEdge(2,5,2,true);
    wg.addEdge(3,4,-1,true);
    wg.addEdge(4,5,-2,true);

    INTMAP distance = shortedDistanceFromSourceToAllNode(wg.adjList, 0);
    for (auto node: distance) {
        cout<< node.first << " " << node.second << endl;
    }
}