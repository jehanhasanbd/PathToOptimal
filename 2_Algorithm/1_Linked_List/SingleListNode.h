#ifndef SINGLE_LIST_NODE_H
#define SINGLE_LIST_NODE_H

#include <iostream>

struct SingleListNode {
    int data;
    SingleListNode *next;

    SingleListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }

};


inline void printLinkedList(SingleListNode *head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty";
        return;
    }

    SingleListNode *ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

inline int lenOfLinkedList(SingleListNode *&head) {
    SingleListNode *ptr = head;
    int count = 0;
    while (ptr) {
        ptr = ptr->next;
        count++;
    }
    return count;
}



inline void addNodeAtEnd(SingleListNode *&head, int data) {
    if (head == nullptr) {
        head = new SingleListNode(data);
        return;
    }
    SingleListNode *ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = new SingleListNode(data);
}

inline void addNodeAtEndHT(SingleListNode *&head,SingleListNode *&tail, int data) {
    if (head == nullptr) {
        head = new SingleListNode(data);
        tail = head;
        return;
    }
    tail->next = new SingleListNode(data);
    tail = tail->next;
}

#endif
