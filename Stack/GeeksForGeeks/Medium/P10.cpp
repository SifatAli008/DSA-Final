// How to Reverse a Stack using Recursion
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>

using namespace std;


struct Stack{
    char data;
    struct Stack* next;
};

typedef struct Stack node;
node* top= nullptr;


void push(char value){
    node* temp =new node ;
    temp->data=value;
    temp->next=top;
    top=temp;
}


char pop() {
    if (top == nullptr) {
        cout << "Empty Stack";
        return '\0';
    }

    node* temp = top;
    char ch = temp->data;
    top = top->next;
    delete temp;


    return ch;
}


int main(){
    string str="1234";

    for(int i = 0; i <str.length(); ++i) {
        push(str[i]);
    }

    for(int i = 0; i <str.length(); ++i) {
        cout<<pop()<<" ";
    }




}

