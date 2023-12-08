//
// Created by Sifat Ali on 12/6/2023.
//
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Edge {
public:
    int dis;
    Edge(int dis) {
        this->dis = dis;
    }
};

void DFSUtil(int v, vector<bool>& visited, list<Edge> Graph[]) {
    visited[v] = true;
    cout << v << " ";

    for (Edge e : Graph[v]) {
        int adjacentVertex = e.dis;
        if (!visited[adjacentVertex]) {
            DFSUtil(adjacentVertex, visited, Graph);
        }
    }
}

void DFS(list<Edge> Graph[], int size, int start) {
    vector<bool> visited(size, false);
    DFSUtil(start, visited, Graph);
}

int main() {
    int v = 4;

    list<Edge> Graph[v];
    Graph[0].push_back(Edge(1));
    Graph[0].push_back(Edge(2));

    Graph[1].push_back(Edge(2));

    Graph[2].push_back(Edge(0));
    Graph[2].push_back(Edge(3));

    Graph[3].push_back(Edge(3));

    int start = 2;
    cout << "DFS : ";
    DFS(Graph, v, start);

    return 0;
}
