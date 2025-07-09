# 📘 DSA Linked List (Singly) – C++

This repository contains implementations of a **Singly Linked List** in **C++**, as part of Day 02 of DSA learning.

Each file in this repo demonstrates a core operation on singly linked lists using pointers and dynamic memory in C++.

---

## 📂 Files Overview

| File Name              | Description                                        |
|------------------------|----------------------------------------------------|
| `node_defition.cpp`    | Defines the `Node` structure (data + pointer)      |
| `insertion_at_front.cpp` | Inserts a node at the beginning of the list       |
| `insertBack.cpp`       | Inserts a node at the end of the list              |
| `deleteNode.cpp`       | Deletes a node by value from the list              |

---

## 🔧 Node Structure

```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Each node is represented like:
[10|o] → [20|o] → [30|/]

10, 20, 30 are data values

o indicates a link to the next node

/ means the pointer is NULL (end of list)

🚀 How to Compile and Run
g++ insertion_at_front.cpp -o insertFront
./insertFront

g++ insertBack.cpp -o insertBack
./insertBack

g++ deleteNode.cpp -o deleteNode
./deleteNode

🧠 Core Concepts Covered
Singly Linked List Basics

Dynamic Memory Allocation

Pointers and References

Insertion (Front & Back)

Deletion by Value

Traversal and Print

🧑‍💻 Author
Shankar Kumar
📌 GitHub: @Shank312
