
// 🔸 Logic:
// Delete node with specific val.
// If head node is the match → move head to next.
// Else → find the previous node of the one to delete and adjust pointers.
// Free memory to avoid leak.

#include <iostream>
using namespace std;

//Define the Node structure
struct Node {
    int data;
    Node* next;

    //Constructor
    Node(int val) {
        data = val;
        next = nullptr;

    }
};

// Function to insert a Node at the end
void insertBack(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp ->next != nullptr) {
        temp = temp->next;

    }
    temp->next = newNode;
}

//Function to delete the first node with a given value
void deleteNode(Node*& head, int val) {
    if (head == nullptr) return;

    //Case 1 : Node to delete is the head
    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return ;
    }

    //Case 2 : Node is in middle or end
    Node* current = head;
    while (current->next != nullptr && current->next->data != val) {
        current = current->next;

    }
    //If node found
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

}

// Function to print the linked list
void printList(Node* head) {
    while(head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;

    }
    cout << "NULL" <<endl;
}

// Main function to test deleteNode
int main() {
    Node* head = nullptr;

    //insert values into the list
    insertBack(head, 10);
    insertBack(head, 20);
    insertBack(head, 30);
    insertBack(head, 40);

    cout << "Original List : ";
    printList(head);

    //Delete a value
    deleteNode(head, 20);
    cout << "After deleting 20: ";
    printList(head);

    //Delete head
    deleteNode(head, 10);
    cout << "After deleting the 10 (head) : ";
    printList(head);

    //Delete tail
    deleteNode(head, 40);
    cout << "After deleting 40 (tail) : ";
    printList(head);

    //Try to delete non-existent value
    deleteNode(head, 100);
    cout << "After trying to delete 100 (not in list): ";
    printList(head);
    return 0;

}
