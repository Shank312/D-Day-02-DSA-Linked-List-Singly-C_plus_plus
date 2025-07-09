
#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;              //value stored in the node
    Node* next;            //pointer to the next node



// constructor to initialize the new Node
Node(int val) {
    data = val;
    next = nullptr;
   }
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
        cout << "NULL" << endl;
}

//main function 
int main() {
    //step 1 : Create nodes using constructor
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    //step 2 : Link nodes
    first->next = second;
    second->next = third;
    third->next = nullptr;           // (optional) explicitly marking end

    //step 3 : Print the list
    cout << "Linked List : ";
    printList(first);

    // Clean up memory (optional) (good practice)
    delete first;
    delete second;
    delete third;
    return 0;



}
