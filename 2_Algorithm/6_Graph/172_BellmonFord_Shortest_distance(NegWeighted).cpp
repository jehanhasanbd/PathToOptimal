#include <iostream>
#include "stack"
#include "set"
#include "WeightedGraph.h"
using namespace std;

using VEC_OF_VEC = vector<vector<int>>;
using INT_MAP = unordered_map<int,int>;



int bellmanFordAlgoShortedDistance(VEC_OF_VEC &edges, int source, int dest, int vertex) {
    vector<int> distance(vertex, INT_MAX);
    distance[source] = 0;

    for (int i = 0; i < vertex-1; ++i) {              // same work :: n-1(vertex-1) times

        for (auto edge: edges) {
            int fromNode = edge[0];
            int toNode = edge[1];
            int weightNode = edge[2];

            if (distance[fromNode]!=INT_MAX && (distance[fromNode] + weightNode < distance[toNode])) {
                distance[toNode] = distance[fromNode] + weightNode;
            }
        }

    }

    for (auto edge: edges) {
        int fromNode = edge[0];
        int toNode = edge[1];
        int weightNode = edge[2];

        if (distance[fromNode]!=INT_MAX && (distance[fromNode] + weightNode < distance[toNode])) {   // if any update occur :: negative cycle
            return -1;
        }
    }
    return distance[dest];

}

int main() {
    WeightedGraph wg;
    wg.addEdge(1,2,4,true);
    wg.addEdge(1,3,3,true);
    wg.addEdge(2,4,7,true);
    wg.addEdge(3,4,-2,true);
    cout<<bellmanFordAlgoShortedDistance(wg.edges, 1,4,4)<<endl;


    WeightedGraph wg_negCyc;
    wg_negCyc.addEdge(1,0,4,true);
    wg_negCyc.addEdge(0,2,-2,true);
    wg_negCyc.addEdge(2,3,2,true);
    wg_negCyc.addEdge(3,1,-1,true);
    wg_negCyc.addEdge(1,2,-3,true);


    cout<<bellmanFordAlgoShortedDistance(wg_negCyc.edges, 0,1,4);

}