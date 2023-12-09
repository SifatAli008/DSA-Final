//Remove characters from the first string which are present in the second string
// Created by Sifat Ali on 11/14/2023.
//
#include <iostream>

using namespace std;

struct stack {
    string data;
    struct stack* next;
};

typedef struct stack node;
node* top = nullptr;

void push(string value) {
    node* temp = new node;
    temp->data = value;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top != nullptr) {
        node* temp = top;
        top = top->next;
        delete temp;
    }
}

void comper(string str, string str1) {
 string temp;
    for(int i=0;i<=str.length();i++){
        for (int j = 0; j <=str1.length();j++) {
           if(str[i]==str1[j]){
               cout<<str[i];
           }
        }
    }
}

void printStack() {
    if (top == nullptr) {
        cout << "Empty string";
        return;
    }
    node* temp = top;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
}

int main() {
    string str = "computer";
    string str1 = "cat";

    for (int i = 0; i < str.length(); i++) {
        string chr(1, str[i]);
        push(chr);
    }

    comper(str, str1);

    return 0;
}
