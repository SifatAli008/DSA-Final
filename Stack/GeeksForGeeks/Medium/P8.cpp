// Sort a stack using a temporary stack
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>
#define Max 10

using namespace std;

int Array[Max];
int top=-1;

void push(int value){
    if(Max==top-1){
     cout<<"Stack OverLoad"<<endl;
        return;
    }
    Array[++top]=value;
}

void sort(){
    if(top==-1){
        cout<<"Stack underFlow"<<endl;
        return;
    }

    for(int i=top;i>=0;i--){
        for(int j=top;j>0;j--){
         if(Array[i]>Array[j]){
             int temp =Array[j];
             Array[j]=Array[j-1];
             Array[j-1]=temp;
         }
        }
    }
}


void PrintStack(){
    if (top == -1 ) {
        cout << "Empty LinkedList";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<Array[i]<<" ";
    }
}

int main(){
    push(1);
    push(4);
    push(3);
    push(6);
    push(9);
    push(2);

    sort();
    PrintStack();
}