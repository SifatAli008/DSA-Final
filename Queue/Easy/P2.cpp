// Detect cycle in an undirected graph using BFS
// Created by Sifat Ali on 11/27/2023.
//
#include <iostream>
using namespace std;
struct Queuelist{
    int data;
    struct Queuelist* next;
};

typedef struct Queuelist node;

node* front= nullptr;
node* rear= nullptr;

void enqueue(int X){
    node* NewNode =new node;
    NewNode->data=X;
    NewNode->next= nullptr;

    if(rear== nullptr){
        front=rear=NewNode;
        return;
    }

    rear->next=NewNode;
    rear= NewNode;
}

int  dequeue(){
    if(front== nullptr){
       cout<<"Empty List"<<endl;
        return 0;
    } else{
        node* temp=front;
        int x=temp->data;
        front=front->next;
        delete temp;

        return x;
    }
}

void printQueue(){
    if(front==nullptr ){
        cout<<"stack empty";
    }

    node* temp = front;
    while(temp!= nullptr){
        cout<<temp->data;
        if (temp->next!= nullptr){
            cout<<endl;
        }
        temp=temp->next;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printQueue();

}