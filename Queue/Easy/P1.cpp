//Implement Stack using Queues
// Created by Sifat Ali on 11/26/2023.
//
#include <iostream>
using namespace std;

#define size 5
int ArrayList[size];

int front = -1;
int rear = -1;


void Enqueue(int data){
    if(rear== size-1){
        cout<<"List is Full";
        return;
    }
  else{
        if(front == -1){
            front=0;
        }
        ArrayList[++rear]=data;
    }
}

void Dequeue() {
    if (front == -1) {
        cout << "Empty list" << endl;
        return;
    }

    if (rear == -1) {
        front = -1;
    }

    else {
        for (int i = front + 1; i <= rear; i++) {
            ArrayList[i - 1] = ArrayList[i];
        }
        rear--;
    }
}

void PrintList(){
    if (front == -1) {
        cout << "Empty list" << endl;
        return;
    }

    for (int i = front ; i <= rear; i++){
        cout<<ArrayList[i]<<" ";
    }
}

int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    PrintList();
}