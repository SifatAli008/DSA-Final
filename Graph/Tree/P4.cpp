//PostOrder
// Created by Sifat Ali on 12/8/2023.
//
#include <iostream>
#include <queue>
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
        if(temp == nullptr) {
            return new Node(value);
        }

        queue<Node *> q;
        q.push(temp);

        while (!q.empty()) {
            Node *current = q.front();
            q.pop();

            if (current->left == nullptr) {
                current->left = new Node(value);
                return root;
            } else {
                q.push(current->left);
            }

            if (current->right == nullptr) {
                current->right = new Node(value);
                return root;
            } else {
                q.push(current->right);
            }
        }
        return root;
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
