//
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>
using namespace std;

struct list {
    char data;
    struct list* next;
};

typedef struct list node;
node* top = nullptr;

void push(char x){
    node* temp = new node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

char pop(){
    if(top == nullptr){
        cout << " Empty stuck.\n" ;
        return 0;
    }

        node* temp = top;
        char ch=temp->data;
        top = top->next;
        delete(temp) ;

    return ch;
}


int main(){

    string arr = "abcde" ;

    for(int i=0; i<arr.length() ; i++){
        push(arr[i]);
    }

    cout<< "reversed array : ";
    for (int i = 0; i < arr.length(); i++) {
        arr[i]=pop();
    }

    for (int i = 0; i < arr.length(); i++) {
        cout<<arr[i];
    }


    return 0;


}
