#ifndef DOUBLY_LIST_NODE_H
#define DOUBLY_LIST_NODE_H

#include <iostream>

struct DoublyListNode {
    int data;
    DoublyListNode *next;
    DoublyListNode *prev;

    DoublyListNode(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};


inline void printLinkedList(DoublyListNode *head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty";
        return;
    }

    DoublyListNode *ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}
inline void printLinkedListReverse(DoublyListNode *head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty";
        return;
    }

    DoublyListNode *ptr = head;
    while (ptr->next) {
        ptr = ptr->next;
    }
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    std::cout << std::endl;
}

inline int lenOfLinkedList(DoublyListNode *&head) {
    DoublyListNode *ptr = head;
    int count = 0;
    while (ptr) {
        ptr = ptr->next;
        count++;
    }
    return count;
}



inline  void addNodeAtEnd(DoublyListNode *&head, int data) {
    if (head == nullptr) {
        head = new DoublyListNode(data);
        return;
    }
    DoublyListNode *ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    DoublyListNode *newNode = new DoublyListNode(data);
    newNode->prev = ptr;
    ptr->next = newNode;

}

inline  void addNodeAtEndHT(DoublyListNode *&head,DoublyListNode *&tail, int data) {
    if (head == nullptr) {
        head = new DoublyListNode(data);
        tail = head;
        return;
    }
    DoublyListNode *newNode = new DoublyListNode(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

#endif
