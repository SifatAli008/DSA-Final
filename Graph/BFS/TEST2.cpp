#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Edge {
public:
    int dis;
    Edge(int dis) {
        this->dis = dis;
    }
};

void BFS(list<Edge> Graph[], int size, int start) {
    bool *visited = new bool[size];
    for (int i = 0; i < size; i++) {
        visited[i] = false;
    }

    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (Edge e : Graph[current]) {
            int adjacentVertex = e.dis;
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                q.push(e);
            }
        }
    }

    delete[] visited;
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
    cout << "BFS : ";
    BFS(Graph, v, start);

    return 0;
}
