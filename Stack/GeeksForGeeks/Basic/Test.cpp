//Reverse individual words
// Created by Sifat Ali on 11/15/2023.
//
#include <iostream>
using namespace std;

struct StackList{
    char data;
    struct StackList* next;
};
typedef struct StackList node;
node* top= nullptr;

void push(char value){
    node* temp=new node;
    temp->data=value;
    temp->next=top;
    top=temp;
}

char pop( ){
    if(top== nullptr){
        cout<<"stack empty";
        return 0;
    }
    else{
        node* temp=top;
        char ch=temp->data;
        top=top->next;
        free(temp);
        return ch;
    }
}

string WordReverse(string str) {
    int length = str.length();
    string str1 = "";

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || i == length) {
            while (top != nullptr) {
                str1 += pop();
            }
            if (i != length) {
                str1 += ' ';
            }
        }
        else {
            push(str[i]);
        }
    }

    return str1;
}


int main(){
    string str="Hello World";

    str=WordReverse(str);
  cout<<str;

}