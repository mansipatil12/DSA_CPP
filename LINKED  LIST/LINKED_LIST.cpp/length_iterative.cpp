//find the length of the linked list using recursion
#include <iostream>
using namespace std;

// Define the Node struct
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
void insert(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to find the length of the linked list using iteration
int length(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Driver code
int main() {
    Node* head = NULL;

    // Insert some nodes into the linked list
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    // Find the length of the linked list using iteration
    int len = length(head);
    cout << "Length of the linked list is: " << len << endl;

    return 0;
}

//Time complexity: O(n)
//Space complexity: O(n)
