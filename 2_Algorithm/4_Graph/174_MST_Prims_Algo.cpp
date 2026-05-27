/*## Prim’s Algorithm (Short)

1. Start from any node.
2. Mark it as visited.
3. Push all connected edges into a **min-heap / priority queue**.
4. Pick the minimum weight edge.
5. If the destination node is not visited:

   * Add the edge to MST
   * Mark node as visited
   * Push its adjacent edges into the heap
6. Repeat until all nodes are visited.

Time Complexity:
O(E \log V)*/

#include <iostream>
#include "WeightedGraph.h"
using ADJ_LIST =  unordered_map<int, list<pair<int,int>>>;
using VEC_OF_PAIR_OF_PAIR = vector<pair<pair<int,int>, int>>;
using namespace std;

VEC_OF_PAIR_OF_PAIR mstPrimsAlgo(ADJ_LIST &adjList, int startNode) {
   int vertex = adjList.size();

   vector<bool> mstVisited(vertex+1, false);
   vector<int> weightOfMST(vertex+1, INT_MAX);
   vector<int> parentOfMST(vertex+1, -1);

   weightOfMST[startNode] = 0;
   for (int i = 0; i < vertex; ++i){

      int fromNode = -1, minWeight = INT_MAX;
      for (int ver = 0; ver <= vertex; ++ver) {
         if (!mstVisited[ver] && weightOfMST[ver] < minWeight) {
            minWeight = weightOfMST[ver];
            fromNode = ver;
         }
      }

      mstVisited[fromNode] = true;

      for (auto neighbor: adjList[fromNode]) {
         int toNode = neighbor.first;
         int weightToNode = neighbor.second;

         if (!mstVisited[toNode] && weightToNode < weightOfMST[toNode]) {
            weightOfMST[toNode] = weightToNode;
            parentOfMST[toNode] = fromNode;
         }
      }

   }
   VEC_OF_PAIR_OF_PAIR ans;
   for (int node=1 ; node <= vertex ; ++node) {
      if (parentOfMST[node] != -1) {
         ans.push_back({{parentOfMST[node],node}, weightOfMST[node]});
      }

   }
   return ans;
}

int main() {
   WeightedGraph wg;
   wg.addEdge(5,4,9,false);
   wg.addEdge(5,1,4,false);
   wg.addEdge(4,1,1,false);
   wg.addEdge(4,3,5,false);
   wg.addEdge(4,2,3,false);
   wg.addEdge(1,2,2,false);
   wg.addEdge(3,2,3,false);
   wg.addEdge(3,6,8,false);
   wg.addEdge(2,6,7,false);

   VEC_OF_PAIR_OF_PAIR ans = mstPrimsAlgo(wg.adjList, 1);
   for (auto x: ans) {
      cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
   }
}