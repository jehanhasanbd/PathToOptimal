#include <iostream>
#include "Graph.h"

using ADJ_LIST = unordered_map<int,list<int>>;

using BOOL_MAP = unordered_map<int,bool>;
using VEC_OF_VEC = vector<vector<int>>;
using VEC = vector<int>;
using VEC_BOOL = vector<bool>;

using namespace std;



void dfs_for_articulation_point(ADJ_LIST &adjList, VEC &discoveryTime,VEC &earliestPossibleTime,BOOL_MAP &visited,VEC_BOOL &articulation_points,int &timer ,int parent, int source) {
    visited[source] = true;
    discoveryTime[source] = earliestPossibleTime[source] = timer++;

    int child = 0;
    for (auto neighbor: adjList[source]) {
        if (neighbor == parent) {
            continue;
        }

        if (!visited[neighbor]) {
            dfs_for_articulation_point(adjList,discoveryTime,earliestPossibleTime,visited,articulation_points,timer,source,neighbor);

            earliestPossibleTime[source] = min(earliestPossibleTime[source], earliestPossibleTime[neighbor]);

            if ((earliestPossibleTime[neighbor] >= discoveryTime[source]) && parent!=-1) {
                articulation_points[source] = true;
            }
            child++;
        }
        else {
            earliestPossibleTime[source] = min(earliestPossibleTime[source], discoveryTime[neighbor]);
        }
    }
    if (parent!=-1 && child>1) {
        articulation_points[source] = true;
    }
}
VEC_BOOL articulationPointFind(ADJ_LIST &adjList) {
    int vertex = adjList.size();
    VEC discoveryTime(vertex+1,-1);
    VEC earliestPossibleTime(vertex+1,-1);
    BOOL_MAP visited;
    int timer = 0;

    VEC_BOOL articulation_points(vertex, false);
    for (auto node: adjList) {
        if (!visited[node.first]) {
            dfs_for_articulation_point(adjList,discoveryTime,earliestPossibleTime,visited,articulation_points,timer,-1,node.first);
        }
    }

    return articulation_points;
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

    VEC_BOOL articulation_points = articulationPointFind(g.adjList);
    for (int i = 0; i < articulation_points.size(); ++i) {
        cout<<i<<" -> "<<articulation_points[i]<<endl;
    }
}