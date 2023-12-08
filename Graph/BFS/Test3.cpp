//
// Created by Sifat Ali on 12/7/2023.
//
#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Edge{
public:
    int dis;
    Edge(int dis){
        this->dis=dis;
    }

};

void BFS(list<Edge> Graph[],int size){
    bool *Array =  new bool[size];

    for(int i=0;i<size;i++){
        Array[i]=false;
    }

    visited(Array);

}

void visited(int Array){

    queue<int> q;
    Array[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (Edge e : Graph[current]) {
            int adjacentVertex = e.dis;
            if (!Array[adjacentVertex]) {
                Array[adjacentVertex] = true;
                q.push(e);
            }
        }
    }
    delete[] visited;
}


int main(){
    int v=4;

    list<Edge> Graph[v];

    list<Edge> Graph[v];
    Graph[0].push_back(Edge(1));
    Graph[0].push_back(Edge(2));

    Graph[1].push_back(Edge(2));

    Graph[2].push_back(Edge(0));
    Graph[2].push_back(Edge(3));

    Graph[3].push_back(Edge(3));


}