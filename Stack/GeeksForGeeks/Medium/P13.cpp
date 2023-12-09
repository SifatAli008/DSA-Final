//Delete consecutive same words in a sequence
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>

using namespace std;

struct stack{
    string data;
    struct stack* next;
};

typedef struct stack node;
node* top = nullptr;

void push(string value){
    node* temp =new node;
    temp->data=value;
    temp->next=top;
    top=temp;
}


void printStack(){
    if(top == nullptr){
        cout<<"Empty string";
    }
    node* temp=top;
    while(temp!=nullptr){
        cout<<temp->data;
        temp=temp->next;
    }
}


int main(){
    string str ="GeeksQuiz";
    int size=str.size();

    cout<<str<<endl;
    for(int i=0;i<=size;i++){
        string chr(1,str[i]);
        push(chr);
    }


    printStack();

}