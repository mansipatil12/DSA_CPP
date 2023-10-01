//search an element in the linked list recursively
#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Recursive function to search for an element in a linked list
bool searchRecursive(Node* head, int key) {
    // Base case: if head is null, return false
    if (head == nullptr) {
        return false;
    }
    // If key is found, return true
    if (head->data == key) {
        return true;
    }
    // Recursive case: search in the rest of the list
    return searchRecursive(head->next, key);
}

int main() {
    // Create a linked list
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    // Search for elements in the list
    std::cout << "Search for 3: " << searchRecursive(head, 3) << std::endl;
    std::cout << "Search for 5: " << searchRecursive(head, 5) << std::endl;

    return 0;
}
