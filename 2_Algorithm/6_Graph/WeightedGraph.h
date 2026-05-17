#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class WeightedGraph {
public:
    unordered_map<int, list<pair<int,int>>> adjList;
    vector<vector<int>> edges;

    void addEdge(int from, int to, int weight,bool direction) {
        adjList[to];
        adjList[from].push_back({to, weight});
        if (!direction) {
            adjList[to].push_back({from,weight});
        }

        vector<int> edge;
        edge.push_back(from);
        edge.push_back(to);
        edge.push_back(weight);
        edges.push_back(edge);
    }

    void printAdjList() {
        for (auto node : adjList) {
            cout << node.first << " --> ";
            for (auto neighbour : node.second) {
                cout <<"["<< neighbour.first << ", "<< neighbour.second << "], ";
            }
            cout << endl;
        }
    }

    int vectexCount() {
        return adjList.size();
    }
};

inline void printVisitedSeq(vector<vector<int>> &visitedSeq) {
    for (auto x: visitedSeq) {
        for (auto y: x) {
            cout<< y << " ";
        }
        cout<<endl;
    }
}

inline void printSeq(vector<int> &Seq) {
    for (auto x: Seq) {
        cout<< x << " ";
    }
}

