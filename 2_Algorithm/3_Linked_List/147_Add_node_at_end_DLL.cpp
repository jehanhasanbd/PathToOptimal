#include <iostream>
#include "DoublyListNode.h"
using namespace std;



void addNodeAtEndImp(DoublyListNode *&head, int data) {
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

void addNodeAtEndHTImp(DoublyListNode *&head,DoublyListNode *&tail, int data) {
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


int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEndImp(head, 5);
    addNodeAtEndImp(head, 6);
    addNodeAtEndImp(head, 7);
    addNodeAtEndImp(head, 8);
    // printLinkedList(head);
    // printLinkedListReverse(head);

    head = nullptr;
    DoublyListNode *tail = nullptr;
    addNodeAtEndHTImp(head, tail, 5);
    addNodeAtEndHTImp(head, tail, 6);
    addNodeAtEndHTImp(head, tail, 7);
    addNodeAtEndHTImp(head, tail, 8);
    printLinkedList(head);
    printLinkedListReverse(head);

}