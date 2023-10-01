#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertAtFront(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    Node* head = nullptr;

    // Insert nodes at the front of the list
    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 1);

    // Print the list
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    return 0;
}

//Time complexity: O(1)
//Space complexity: O(1)

