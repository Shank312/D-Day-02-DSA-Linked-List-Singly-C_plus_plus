
//🔸 Logic:
// Create new node.
// Point its next to current head.
// Make new node the head.

// *****Full Code with insertFront() and printList()*****

#include <iostream>
using namespace std;

//Define the node structure
struct Node {
    int data;                 //value stored in the node
    Node* next;               //Pointer to the next node

    //Constructor to initialize a new node
    Node(int val){
        data = val;
        next = nullptr;

    }
};

//Function to insert at the front of the list;
void insertFront(Node*& head, int val) {
    //Create a new node with given value
    Node* newNode = new Node(val);

    //point newNode to current head
    newNode->next = head;

    //move head to point newNode
    head = newNode;
}

//Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;

    }
    cout << "NULL" << endl;
}

// Main function to demonstrate insertion at the front

int main() {
    Node* head = nullptr;                // Start with empty list

    //Insert elements at the front
    insertFront(head, 30);               // List : 30-> NULL
    insertFront(head, 20);               // List : 20->30-> NULL
    insertFront(head, 10);               // List : 10->20->30-> NULL

    // Print the list
    cout << "Linked List after inserting at front: ";
    printList(head);

    // Operational free memory
    while( head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;

    }
    return 0;
}

