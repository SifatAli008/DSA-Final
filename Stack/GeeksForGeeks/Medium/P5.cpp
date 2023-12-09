//Next Greater Element (NGE) for every element in given Array
// Created by Sifat Ali on 11/16/2023.
//
#include <iostream>
using namespace std;

#define Max 10
int Array[Max];
int front=-1;
int rear=-1;

void push(int value){
    if(front==-1){
        front=0;
    }
   Array[++rear]=value;
}

void NGE(){//Next Greater Element

    int flag;
    flag=0;
   for(int i=front;i<=rear;i++) {
       for (int j = i + 1; j <= rear; j++) {
           if (Array[i] < Array[j]) {
               cout << Array[i] << "->" << Array[j] << endl;
               i++;
               flag++;
           }
           else {
               j++;
               if (Array[i] < Array[j]) {
                   cout << Array[i] << "->" << Array[j] << endl;
                   flag++;
               }
           }
       }
       if (flag == 0) {
           cout << Array[i] << "->" << "-1"<<endl;
       }
   }
        cout << rear << "->" << "-1"<<endl;

}

int main(){
  int arr[] = {  13 , 7, 6 , 12  };
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        push(arr[i]);
    }

    NGE();
}