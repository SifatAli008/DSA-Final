// Queue Implementation useing LinkedList
// Created by Sifat Ali on 11/15/2023.
//
#include <iostream>
using namespace std;

struct QueueList{
    int data;
    struct QueueList* next;
};

typedef struct QueueList node;
     node* front= nullptr;
     node* rear= nullptr;

void push(int x) {
    node *temp = new QueueList;
    temp->data = x;
    temp->next = nullptr;


    rear->next = temp;
    rear = temp;
}

void pop( ){
    if(front==nullptr ){
        cout<<"stack empty";
    }

    else{
        node* temp=front;
        front=front->next;
        free(temp);
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
    push(1);
    push(2);
    push(3);
    pop();
    printQueue();

}