//search element in linked list (iterative)
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* search(Node* head, int key) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int main() {
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    int key = 2;
    Node* result = search(head, key);
    if (result == NULL) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found: " << result->data << endl;
    }

    return 0;
}
