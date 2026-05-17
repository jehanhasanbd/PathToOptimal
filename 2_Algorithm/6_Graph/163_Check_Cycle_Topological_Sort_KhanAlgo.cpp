#include <iostream>
#include "Graph.h"
#include <stack>

using namespace std;



bool CheckCycleTopologicalSortKhansAlgo(unordered_map<int, list<int>> &adjList) {
    unordered_map<int, int> indegrees;                      // to count every nodes indegree  {node : indegree}
    for (auto node: adjList) {
        indegrees[node.first];                              // for node indegree init
        for (auto neighbor: node.second) {              // increment every neighbor's indegree
            indegrees[neighbor]++;
        }
    }

    queue<int> q;
    for (auto node: indegrees) {          // push into q :: which indegree is zero
        if (node.second == 0) {
            q.push(node.first);
        }
    }

   int countOfQPop = 0;
    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        countOfQPop++;

        for (auto neighbor: adjList[frontNode]) {      // neighbor of  frontNodeOfQueue  -> decrement indegree -> if indegree is zerp :: push into q
            indegrees[neighbor]--;
            if (indegrees[neighbor] == 0) {
                q.push(neighbor);
            }
        }

    }

    if (countOfQPop == adjList.size()) {
        return false;
    }
    return true;
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

    cout<< CheckCycleTopologicalSortKhansAlgo(g.adjList);

}