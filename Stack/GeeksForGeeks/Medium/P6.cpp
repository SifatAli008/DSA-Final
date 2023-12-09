//Find the nearest smaller numbers on left side in an array
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>
using namespace std;

#define Max 10
int Array[Max];
int front=-1;
int rear=-1;

void push(int value){
    if(front==-1){
        front=0;
    }
    Array[++rear]=value;
}

void NSE(int size){ //Nearest Smallest Element

    cout << "_, ";

    for (int i = 1; i < size; i++) {
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (Array[j] < Array[i]) {
                cout << Array[j];
                if(i!=size){
                    cout<<',';
                }
                break;
            }
        }
        if (j == -1)
            cout << "_, ";
    }
}


int main(){
    int arr[] = {  1, 6, 4, 10, 2, 5  };
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        push(arr[i]);
    }

    NSE(size);
}