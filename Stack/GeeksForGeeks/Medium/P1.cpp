// Queue using Stacks
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>
using namespace std;
#define Max 10

int Array[Max];
int front=-1;
int rear=-1;

void push(int value){
    if(rear==Max-1){
          cout<<"Stack OverLoad"<<endl;
        return;
    }
    if(front==-1){
        front=0;
    }

    Array[++rear]=value;
}

void StackPrint(){
    if (rear == -1 ) {
        cout << "Empty LinkedList";
        return;
    }
    for(int i=rear;i>=0;i--){
        cout<<Array[i]<<" ";
    }
}

void PrintList(){
    if (rear == -1 ) {
        cout << "Empty LinkedList";
        return;
    }
    for(int i=front;i<=rear;i++){
        cout<<Array[i]<<" ";
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);

 StackPrint();
}