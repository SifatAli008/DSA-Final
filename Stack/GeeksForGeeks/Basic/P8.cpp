// Delete middle element of a stack
// Created by Sifat Ali on 11/15/2023.
//
#include <iostream>
#define Max 10
using namespace std;

int Array[Max];
int top=-1;

void push(int data){
    if(Max==top-1){
      cout<<"Stack Overflow";
        return;
    }
    top++;
    Array[top]=data;
}

void DeletMiddel(){
    int count = top;
    int mid = count / 2;
    for(int i=mid; i<top;i++){
        Array[i] = Array[i + 1];
    }
    top--;
}

void PrintStack(){
    if(top==-1){
        cout<<"Stack Overflow";
        return;
    }
    int temp=top;
    for(int i=top; i>=0;i--){
        cout<<Array[i]<<" ";
    }
}


int main(){
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
    DeletMiddel();
   PrintStack();
}