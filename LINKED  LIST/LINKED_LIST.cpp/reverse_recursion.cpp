#include <iostream>

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

Node* reverseList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
    std::cout << "Original list: ";
    printList(head);
    head = reverseList(head);
    std::cout << "Reversed list: ";
    printList(head);
    return 0;
}
