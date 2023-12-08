//PostOrder
// Created by Sifat Ali on 12/8/2023.
//
#include <iostream>

using namespace std;

class Tree {
    class Node {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
    };

    Node *root;
public:
    Tree() {
        this->root = nullptr;
    }

    Node* insert(int value) {
        root = insertNode(root, value);
        return root;
    }

    Node* insertNode(Node *temp, int value) {
        if (temp == nullptr) {
            return new Node(value);
        } else {
            // Insert into the left subtree if it's empty or has space
            if (temp->left == nullptr) {
                temp->left = insertNode(temp->left, value);
            } else {
                insertNode(temp->left, value);
            }
            // If the left subtree is already filled, insert into the right subtree
            if (temp->right == nullptr) {
                temp->right = insertNode(temp->right, value);
            } else {
                insertNode(temp->right, value);
            }
        }
        return temp;
    }




    void Print(Node* temp) {
        if (temp != nullptr) {
            Print(temp->left);
            Print(temp->right);
            cout << temp->data << " ";
        }
    }

    void Post0rder() {
        cout << "Post-order traversal: ";
        Print(root);
        cout << endl;
    }
};

int main() {
    Tree tree;

    tree.insert(5);
    tree.insert(4);
    tree.insert(3);
    tree.insert(1);
    tree.insert(6);
    tree.insert(7);
    tree.insert(8);


    cout << endl;
    tree.Post0rder();

    return 0;
}
