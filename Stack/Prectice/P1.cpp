//
// Created by Sifat Ali on 11/14/2023.
//
#include <iostream>
using namespace std;


class LL{
    class node{
    public:
        string data;
        node* next;

       node(string data){
           this->data=data;
           this->next= nullptr;
        }
    };
    node* head;
public:
    LL(){
        this->head= nullptr;
    }

    void push(string data){
       node* NewNode = new node(data);
        if(head==nullptr){
            head=NewNode;
            return;
        }

        node*
        NewNode->next=head;
        head=NewNode;
    }

    void PrintList(){
        if(head== nullptr){
            cout<<'Empty List';
            return;
        }

        node* temp =head;
        while (temp!= nullptr){
            cout<<temp->data;
            if(temp->next!= nullptr){
                cout<<"->";
            }
            temp=temp->next;
        }
    }
};

int main() {
     LL list;
    list.push("1");
    list.push("2");
    list.push("3");

    list.PrintList();
}
