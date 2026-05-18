/* Kruskal’s Algorithm (Short)

1. Sort all edges by increasing weight.
2. Make each node its own parent (Disjoint Set / Union-Find).
3. Pick the smallest edge.
4. If the two nodes belong to different sets:

* Add the edge to MST
* Union the two sets
5. Repeat until MST contains `V - 1` edges.

Time Complexity:
O(E \log E)
*/

#include <iostream>
#include <algorithm>
#include "WeightedGraph.h"
using VEC_OF_VEC =  vector<vector<int>>;
using VEC_OF_PAIR_OF_PAIR = vector<pair<pair<int,int>, int>>;
using namespace std;

void makeSet(vector<int> &parent, vector<int> &rank, int vertex) {
   for (int ver = 0; ver <= vertex; ++ver) {
      parent[ver] = ver;
      rank[ver] = 0;
   }
}

int findParent(vector<int> &parent, int node) {
   if (parent[node] == node) {
      return node;
   }
   return parent[node] = findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank) {
   u = findParent(parent,u);
   v = findParent(parent,v);

   if (rank[u] > rank[v]) {
      parent[v] = u;
   }
   else if (rank[u] < rank[v]) {
      parent[u] = v;
   }
   else {
      parent[u] = v;
      rank[v]++;
   }
}

bool cmp(vector<int> &node1, vector<int> &node2) {
   return node1[2] < node2[2];
}

VEC_OF_PAIR_OF_PAIR mstKruskalAlgo(VEC_OF_VEC &edges, int vertex) {


   vector<int> rankOfMST(vertex+1);
   vector<int> parentOfMST(vertex+1);

   makeSet(parentOfMST, rankOfMST, vertex);

   sort(edges.begin(), edges.end(), cmp);

   VEC_OF_PAIR_OF_PAIR ans;

   for (auto edge: edges) {
      int fromNode = edge[0];
      int toNode = edge[1];
      int edgeWeight = edge[2];

      if (fromNode != toNode) {
         unionSet(fromNode, toNode, parentOfMST, rankOfMST);
         ans.push_back({{fromNode, toNode}, edgeWeight});
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

   VEC_OF_PAIR_OF_PAIR ans = mstKruskalAlgo(wg.edges, 6);
   for (auto x: ans) {
      cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
   }
}