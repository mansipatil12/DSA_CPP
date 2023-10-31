#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int size(Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return size(root->left) + 1 + size(root->right);
    }
}

int main() {
    Node* root = new Node();
    root->data = 1;
    root->left = new Node();
    root->left->data = 2;
    root->right = new Node();
    root->right->data = 3;
    root->left->left = new Node();
    root->left->left->data = 4;
    root->left->right = new Node();
    root->left->right->data = 5;

    cout << "Size of the tree is: " << size(root) << endl;

    return 0;
}
