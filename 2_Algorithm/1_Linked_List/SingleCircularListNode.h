#ifndef SINGLE_CIRCULAR_LIST_NODE_H
#define SINGLE_CIRCULAR_LIST_NODE_H

#include <iostream>

struct SingleCircularListNode {
    int data;
    SingleCircularListNode *next;

    SingleCircularListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }

};


void printLinkedList(SingleCircularListNode *&head) {
    if (head == nullptr) {
        std::cout<<"Linked List is empty";
        return;
    }
    SingleCircularListNode *ptr = head;
    do {
        std::cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while (ptr != head);
    std::cout<< std::endl;
}

inline int lenOfLinkedList(SingleCircularListNode *&head) {
    SingleCircularListNode *ptr = head;
    int count = 0;
    do {
        ptr=ptr->next;
        count++;
    }while (ptr->next != head);
    return count;
}



inline  void addNodeAtEnd(SingleCircularListNode *&head, int data) {
    if (head == nullptr) {
        SingleCircularListNode *newNode = new SingleCircularListNode(data);
        newNode->next = newNode;
        head = newNode;

        return;
    }
    SingleCircularListNode *ptr = head;
    do {
        ptr=ptr->next;
    }while (ptr->next != head);

    SingleCircularListNode *newNode = new SingleCircularListNode(data);
    newNode->next = head;
    ptr->next = newNode;
}




#endif
