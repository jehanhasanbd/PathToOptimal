#include <iostream>
#include "stack"
#include "set"
#include "WeightedGraph.h"
using namespace std;

using ADJLIST =  unordered_map<int, list<pair<int,int>>>;
using SETOFPAIR = set<pair<int,int>>;
using INTMAP = unordered_map<int,int>;



INTMAP djkstraAlgoShortedDistanceFromSourceToAllNode(ADJLIST &adjList, int source) {
    INTMAP distance;
    for (auto node: adjList) {
        distance[node.first] = INT_MAX;
    }
    distance[source] = 0;

    SETOFPAIR setOfPair;
    setOfPair.insert({0, source});

    while (!setOfPair.empty()) {
        auto topNode = *(setOfPair.begin());
        setOfPair.erase(topNode);

        int distanceOfTopNode = topNode.first;
        int valueOfTopNode = topNode.second;

        for (auto neighbor: adjList[valueOfTopNode]) {
            if (distanceOfTopNode + neighbor.second < distance[neighbor.first]) {
                // if there is any previous instance, remove to update
                auto prevNeighborIndex = setOfPair.find({distance[neighbor.first], neighbor.first});
                if (prevNeighborIndex != setOfPair.end()) {
                    setOfPair.erase(prevNeighborIndex);
                }

                distance[neighbor.first] = distanceOfTopNode + neighbor.second;                   // update the distance and insert repeatly
                setOfPair.insert({distance[neighbor.first], neighbor.first});
            }
        }
    }
    return distance;

}

int main() {
    WeightedGraph wg;
    wg.addEdge(2,1,3,false);
    wg.addEdge(2,0,1,false);
    wg.addEdge(1,0,7,false);
    wg.addEdge(1,4,1,false);
    wg.addEdge(4,3,7,false);
    wg.addEdge(3,1,5,false);
    wg.addEdge(3,0,2,false);


    INTMAP distance = djkstraAlgoShortedDistanceFromSourceToAllNode(wg.adjList, 0);
    for (auto node: distance) {
        cout<< node.first << " " << node.second << endl;
    }
}