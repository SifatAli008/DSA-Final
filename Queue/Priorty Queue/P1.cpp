// Prioty Queue
// Created by Sifat Ali on 11/29/2023.
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

    if (rear == nullptr) {
        front = rear =temp;
        return;
    }

    if(temp>rear){
        rear->next = temp;
        rear = temp;
        return;
    }

    if(temp<front){
        temp->next=front;
        front = temp;
        return;
    }

    node* prev = nullptr;
    node* current = front;

    while (current != nullptr && current->data < x) {
        prev = current;
        current = current->next;
    }

    prev->next = temp;
    temp->next = current;

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

void peek(){
    if(front==nullptr ){
        cout<<"stack empty";
    }
    else{
        cout<<front->data<<endl;
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
    push(3);
    push(5);
    push(1);
    printQueue();



}