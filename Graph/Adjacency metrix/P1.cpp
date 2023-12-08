//Adjency Metrix
// Created by Sifat Ali on 12/8/2023.
//
#include <iostream>
using namespace std;

// For example:
// 1 --- 2
// |  \  |
// |   \ |
// 0 --- 3

int main(){
   int vertices=3;

   int AdjencyMetrix[vertices][vertices];

    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            AdjencyMetrix[i][j] = 0;
        }
    }

    AdjencyMetrix[0][1] = 1;
    AdjencyMetrix[1][0] = 1;

    AdjencyMetrix[1][2] = 1;
    AdjencyMetrix[2][1] = 1;

    AdjencyMetrix[0][3] = 1;
    AdjencyMetrix[3][0] = 1;

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            cout << AdjencyMetrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}