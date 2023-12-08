//How to determine if a binary tree is height-balanced?
// Created by Sifat Ali on 12/8/2023.
//
#include <iostream>
#include <queue>

using namespace std;

class Tree{
    class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left= nullptr;
            this->right= nullptr;
        }
    };
public:
    Node* root;

    Tree(){
        this->root= nullptr;
    }

    Node* insert(int data){
        root=insertNode(root,data);
        return root;
    }

    Node* insertNode(Node* temp,int data){
        if(temp== nullptr){
            return new Node(data);
        }

        queue<Node*>q;
        q.push(temp);

        while(!q.empty()){
            Node* current=q.front();
            q.pop();

            if(current->left== nullptr){
                current->left=new Node(data);
                return temp;
            } else{
                q.push(current->left);
            }

            if(current->right== nullptr){
                current->right=new Node(data);
                return temp;
            } else{
                q.push(current->right);
            }
        }
        return temp;
    }

    int maxDepth(Node* node) {
        if (node == nullptr)
            return 0;
        else {
            int leftDepth = maxDepth(node->left);
            int rightDepth = maxDepth(node->right);

            if (leftDepth > rightDepth)
                return leftDepth + 1;
            else
                return rightDepth + 1;
        }
    }

    int minDepth(Node* node) {
        if (node == nullptr)
            return 0;
        else {
            int leftDepth = minDepth(node->left);
            int rightDepth = minDepth(node->right);

            if (leftDepth < rightDepth)
                return leftDepth + 1;
            else
                return rightDepth + 1;
        }
    }

    bool isBalanced(Tree tree) {
        Node* Temp=tree.root;
        int maxDep = maxDepth(Temp);
        int minDep = minDepth(Temp);

        return (maxDep - minDep <= 1);
    }
};

int main(){
    Tree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(4);
    tree.insert(1);
    tree.insert(6);
    tree.insert(7);
    tree.insert(8);


    if (tree.isBalanced(tree)){
        cout << "Tree is balanced.\n";
    }
    else{
        cout << "Tree is not balanced.\n";
    }
}