#include <iostream>
#include "stack"
#include "set"
#include "WeightedGraph.h"
using namespace std;

using VEC_OF_VEC = vector<vector<int>>;
using INT_MAP = unordered_map<int,int>;

void floydWarshalShortestPathAllPair(VEC_OF_VEC adjMatrix) {
    int vertex = adjMatrix.size();

    for (int k = 0; k < vertex; ++k) {
        for (int i = 0; i < vertex; ++i) {
            for (int j = 0; j < vertex; ++j) {
                if (adjMatrix[i][k]!=INT_MAX && adjMatrix[k][j]!=INT_MAX) {
                    adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
                }
            }
        }
    }

    for (int i = 0; i < vertex; ++i) {
        for (int j = 0; j < vertex; ++j) {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    WeightedGraph wg;
    wg.prepareAdjMatrix(5);
    wg.edgeAddAdjMatrix(0,1,3,true);
    wg.edgeAddAdjMatrix(0,2,8,true);
    wg.edgeAddAdjMatrix(0,4,-4,true);
    wg.edgeAddAdjMatrix(1,4,7,true);
    wg.edgeAddAdjMatrix(1,3,1,true);
    wg.edgeAddAdjMatrix(2,1,4,true);
    wg.edgeAddAdjMatrix(3,2,-5,true);
    wg.edgeAddAdjMatrix(4,3,6,true);
    wg.edgeAddAdjMatrix(3,0,2,true);

    floydWarshalShortestPathAllPair(wg.adjMatrix);

}