//
// Created by Sifat Ali on 11/12/2023.
//
#include<iostream>
using namespace std;
const int Size = 3;
int QueueList[Size];
int front=-1,rear =-1;

void enqueue(int data){
    if(rear == Size-1 ) {
        cout << "Queue is full." << endl;
        return;

    }

    else{
        if(front==-1){
            front=0;
        }
        QueueList[++rear]=data;
    }
}


void dequeue(){
    if(front==-1){
        cout<<"Empty list"<<endl;
        return;
    }

    if(rear == -1){
        front = -1;
    }

    else{
        for (int i = front+1; i <= rear; i++) {
            QueueList[i-1] = QueueList[i];
        }
        rear--;//3-2-1-0-1
    }

}

void peek(){
    if(front==-1){
        cout<<"Empty list"<<endl;
        return;
    }
    cout << "topmost number: " << QueueList[front] << endl;
}

void display(){
    if(front==-1){
        cout<<"Empty list"<<endl;
        return;
    }
    else{
        for (int i = front; i <=rear  ; ++i) {
            cout<< QueueList[i]<<" ";
        }
    }cout<<endl;
}


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

    peek();


}