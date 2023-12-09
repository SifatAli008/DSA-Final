//Postfix to Prefix Conversion
// Created by Sifat Ali on 11/14/2023.
//
#include <iostream>
using namespace std;

struct stack{
    string data;
    struct stack* next;
};
typedef struct stack node;
node* top = nullptr;

void push(char value){
     node* temp = new node;
    temp->data=value;
    temp->next=top;
    top=temp;
}

void pop(){
    node* temp = top;
    temp->next=temp->next->next;
}

void printStack(){
    if(top == nullptr){
        cout<<"Empty string";
        return;
    }
    node* temp=top;
    while(temp!=nullptr){
        cout<<temp->data;
        temp=temp->next;
    }
}

int perc(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/'||c=='*'){
        return 2;
    }
    else if(c=='-'||c=='+'){
        return 1;
    } else{
        return -1;
    }
}

string InfixToPrefix(string str) {
    string res;
      node* temp=top;

    for (int i = 0; i < str.length(); ++i) {
        string ch(1, str[i]);
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'z') {
            res = res + str[i];
        } else if (str[i] == '(') {
            push(str[i]);
        } else if (str[i] = ')') {
            while (str.empty() && temp != '(') {
                pop();
            }
            if (!str.empty()) {
                  pop();
            }
        }
         else{
             while(){

             }
         }
    }
}

int main(){
    string str ="GeeksQuiz";


 

    printStack();
}