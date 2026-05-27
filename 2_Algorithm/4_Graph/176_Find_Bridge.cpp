#include <iostream>
#include "Graph.h"

using ADJ_LIST = unordered_map<int,list<int>>;

using BOOL_MAP = unordered_map<int,bool>;
using VEC_OF_VEC = vector<vector<int>>;
using VEC = vector<int>;

using namespace std;



void dfs_for_bridge(ADJ_LIST &adjList, VEC &discoveryTime,VEC &earliestPossibleTime,BOOL_MAP &visited,VEC_OF_VEC &bridges,int &timer ,int parent, int source) {
    visited[source] = true;
    discoveryTime[source] = earliestPossibleTime[source] = timer++;

    for (auto neighbor: adjList[source]) {
        if (neighbor == parent) {
            continue;
        }

        if (!visited[neighbor]) {
            dfs_for_bridge(adjList,discoveryTime,earliestPossibleTime,visited,bridges,timer,source,neighbor);

            earliestPossibleTime[source] = min(earliestPossibleTime[source], earliestPossibleTime[neighbor]);

            if (earliestPossibleTime[neighbor] > discoveryTime[source]) {
                vector<int> singleBridge;
                singleBridge.push_back(source);
                singleBridge.push_back(neighbor);

                bridges.push_back(singleBridge);
            }
        }
        else {
            earliestPossibleTime[source] = min(earliestPossibleTime[source], discoveryTime[neighbor]);
        }
    }
}
VEC_OF_VEC bridgeFinding(ADJ_LIST &adjList) {
    int vertex = adjList.size();
    VEC discoveryTime(vertex+1,-1);
    VEC earliestPossibleTime(vertex+1,-1);
    BOOL_MAP visited;
    int timer = 0;

    VEC_OF_VEC bridges;
    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs_for_bridge(adjList,discoveryTime,earliestPossibleTime,visited,bridges,timer,-1,node.first);
        }
    }

    return bridges;
}

int main() {
    Graph g;
    g.addEdge(1,0,false);
    g.addEdge(0,2,false);
    g.addEdge(2,1,false);
    g.addEdge(2,5,false);
    g.addEdge(5,6,false);
    g.addEdge(6,7,false);
    g.addEdge(7,8,false);
    g.addEdge(8,5,false);
    g.addEdge(2,3,false);
    g.addEdge(3,4,false);

    VEC_OF_VEC bridges = bridgeFinding(g.adjList);
    printVisitedSeq(bridges);
}