//insert a given node after a given node in linked list
#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertAfter(Node* prevNode, int newData) {
    if (prevNode == nullptr) {
        std::cout << "Previous node cannot be null.\n";
        return;
    }

    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
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
    third->next = nullptr;

    std::cout << "Initial linked list: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";

    insertAfter(second, 4);

    std::cout << "Linked list after inserting 4 after second node: ";
    current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";

    return 0;
}
