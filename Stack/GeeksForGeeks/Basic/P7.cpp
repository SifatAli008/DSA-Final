//Reverse a Stack using Queue
// Created by Sifat Ali on 11/15/2023.
//
#include <iostream>
#define Max 10

using namespace std;

int QueueList[Max];
int front=-1,rare=-1;

void enqueue(int data){
    if(front==-1){
        front=0;
    }
    rare++;
    QueueList[rare]=data;
}

void revers(){
    if(front==-1){
        cout<<"Empty list"<<endl;
    } else{
        for(int i =rare;i>=front;--i ){
            cout<<QueueList[i];
            if(i>front){
                cout<<"->";
            }
        }
    }
}


void display(){
    if(front==-1){
        cout<<"Empty list"<<endl;
    } else{
        for(int i =front;i<=rare;++i ){
            cout<<QueueList[i];
            if(i<rare){
                cout<<"->";
            }
        }
    cout<<endl;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
display();
revers();

}