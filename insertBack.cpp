
// 🔸 Logic:
// Create new node.
// If list empty → make head point to new node.
// Otherwise, traverse to last node and attach new node.



#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;

    //Constructor
    Node(int val) {
        data = val;
        next = nullptr;

    }
};

// Function to insert a node at the end (back) of the list
void insertBack(Node*& head, int val) {
    Node* newNode = new Node(val);

    //If the list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    //Traverse to the last node
    Node* temp = head;
    while (temp ->next != nullptr) {
        temp =temp->next;

    }
    // Link the last node to the newNode
    temp->next = newNode;

}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;

    }
    cout << "NULL" << endl;
}

// Main function to test inserBack
int main() {
    Node* head = nullptr;

    //Insert nodes at the back
    insertBack(head, 10);
    insertBack(head, 20);
    insertBack(head, 30);
    insertBack(head, 40);

    //Print the final list
    cout<< "Linked list : ";
    printList(head);

    return 0;
}