#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;

    vector<vector<int>> edges;

    void addEdge(int from, int to, bool direction) {
        adjList[from].push_back(to);
        if (!direction) {
            adjList[to].push_back(from);
        }

        vector<int> edge;
        edge.push_back(from);
        edge.push_back(to);
        edges.push_back(edge);
    }

    void printAdjList() {
        for (auto node : adjList) {
            cout << node.first << " --> ";
            for (auto neighbour : node.second) {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }

    int vectexCount() {
        return adjList.size();
    }

    static unordered_map<int, list<int>> makeReverseAdjList(unordered_map<int, list<int>> &adjList) {
        unordered_map<int, list<int>> reverseAdjList;
        for (auto node: adjList) {
            reverseAdjList[node.first];
            for (auto neighbor: node.second) {
                reverseAdjList[neighbor].push_back(node.first);
            }
        }
        return reverseAdjList;
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

