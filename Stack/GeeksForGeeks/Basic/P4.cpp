//Reverse an array using Stack
// Created by Sifat Ali on 11/14/2023.
//
#include <iostream>
using namespace std;

#define Max 10
int stack[Max];
int top=-1;

void push(int value){
    if(top==Max-1){
        cout<<"Stack Overflow";
        return;
    }
    top++;
    stack[top]= value;
}

void PrintStack(){
    if(top==-1){
        cout<<"Empty UnderFlow";
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }

}


int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size= sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++) {
        push(array[i]);
    }

    PrintStack();
}