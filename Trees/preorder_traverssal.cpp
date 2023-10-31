#include <bits/stdc++.h>
#include "binary_tree_intro.cpp"

using namespace std;

void preOrderRecursive(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrderRecursive(root->left);
    preOrderRecursive(root->right);
}

int main() {
    Node* root = NULL;
    root = buildTree(root);

    cout << "\nPre Order Traversal : " << endl;
    preOrderRecursive(root);

    return 0;
}

