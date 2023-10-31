#include <bits/stdc++.h>
#include "binary_tree_intro.cpp"

using namespace std;

void postOrderRecursive(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrderRecursive(root->left);
    postOrderRecursive(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    root = buildTree(root);

    cout << "\nPost Order Traversal : " << endl;
    postOrderRecursive(root);

    return 0;
}
