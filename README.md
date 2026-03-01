# Singly & Doubly Linked Lists in C++

![C++ Logo](https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg)

---

## 📚 About This Project

This project is a **hands-on exercise** to learn and master **data structures** in **C++** from scratch.  
The main goal is to **understand how linked lists work internally** without using STL, and to **practice object-oriented programming** principles like classes, templates, and pointers.  

The project demonstrates two types of linked lists:

1. **Singly Linked List** (`clsLinkedList`)  
2. **Doubly Linked List** (`clsDblLinkedList`)  

All implementations are done **from scratch**, including node management, insertion, deletion, and traversal.

---

## 🎯 Project Objectives

- Practice **C++ class design** and **templates**  
- Implement **linked lists from zero** to understand memory management and pointers  
- Learn to **separate class declaration and implementation** (header files)  
- Build **reusable and modular code**  
- Prepare a **professional GitHub repository** to showcase learning journey  

---

## 🏗️ Project Structure (Hierarchy)
```
Singly-Doubly-Linked-Lists-Cpp/
│
├── clsNode.h # Node class for Singly Linked List
├── clsLinkedList.h # Singly Linked List class using clsNode
├── clsDblLinkedList.h # Doubly Linked List class with internal Node
├── main.cpp # Demonstration of all operations for both lists
└── README.md # This documentation
```


---

## 🔹 Classes Overview

### 1️⃣ Singly Linked List (`clsLinkedList`)

- Uses **external Node class** (`clsNode<T>`)  
- Supports operations:  
  - `InsertAtBeginning(value)`  
  - `InsertAtEnd(value)`  
  - `InsertAfter(node, value)`  
  - `DeleteNode(value)`  
  - `DeleteFirstNode()` / `DeleteLastNode()`  
  - `Find(value)`  
  - `Print()`  
  - `Size()` / `IsEmpty()` / `IsExist(value)`  

- **Node hierarchy:**  
clsNode<T>
└─ clsLinkedList<T>


---

### 2️⃣ Doubly Linked List (`clsDblLinkedList`)

- Contains **internal Node class** with `prev` and `next` pointers  
- Supports operations:  
  - `InsertAtBeginning(value)`  
  - `InsertAtEnd(value)`  
  - `InsertAfter(node, value)`  
  - `DeleteNode(node)`  
  - `DeleteFirstNode()` / `DeleteLastNode()`  
  - `PrintList()`  
  - `Size()` / `IsEmpty()`  
  - `Reverse()`  
  - `GetItem(index)` / `UpdateItem(index, value)`  

- **Node hierarchy:**  
clsDblLinkedList<T>
└─ Node


---

## ⚙️ How To Run

1. Open **main.cpp** in Visual Studio or any C++ IDE  
2. Compile the project  
3. Run the executable  
4. Observe console output demonstrating all list operations  

> The main.cpp demonstrates **all implemented operations** for both Singly and Doubly linked lists.

---

## 🔹 What You Will Learn

- Creating classes and templates in C++  
- Understanding **pointers** and **dynamic memory allocation**  
- Implementing **linked list operations manually**  
- Writing modular, reusable, and clean C++ code  
- Documenting and organizing a project professionally on GitHub  

---

## 💡 Notes

- This project is designed **purely for learning and practice**  
- No STL containers are used; everything is implemented manually  
- Demonstrates good **object-oriented design and coding practices**  

---

## ✅ Summary

By completing this project, you will have a **solid foundation in linked lists**, understand **node relationships**, and be able to **build more complex data structures** in C++ in the future.  




---



## Screenshots of the Project

### Node Class
<img width="2080" height="4648" alt="clsNode h-(for-Singly-Linked-List)" src="https://github.com/user-attachments/assets/0ab309dc-89cd-4c0d-95cc-41c6a649be41" />


### Singly Linked List
<img width="2080" height="3568" alt="clsLinkedList h-(Singly-Linked-List)" src="https://github.com/user-attachments/assets/20d535fa-558c-4fc8-b33a-9fdc8cce6b3f" />


### Doubly Linked List
<img width="2080" height="4468" alt="clsDblLinkedList h-(Doubly-Linked-List)" src="https://github.com/user-attachments/assets/26d15422-23f3-4dea-bb2c-a2c4c2ad2e55" />


### Main Output
<img width="2080" height="3388" alt="main cpp-(Demo-of-Both-Lists)" src="https://github.com/user-attachments/assets/d5c728b9-0d6d-4c65-ae60-328f37a0b695" />
