#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main() {
    // create a linked list
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
    
    // print original list
    std::cout << "Original list: ";
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    // reverse the list
    head = reverseList(head);

    // print reversed list
    std::cout << "Reversed list: ";
    curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    return 0;
}
