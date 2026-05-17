#include <iostream>
#include "SingleCircularListNode.h"
using namespace std;


void addNodeAtBeg(SingleCircularListNode *&head, int data) {
    if (head == nullptr) {
        SingleCircularListNode *newNode = new SingleCircularListNode(data);
        newNode->next = newNode;
        head = newNode;
        return;
    }

    SingleCircularListNode *ptr = head;
    while (ptr->next != head) {
        ptr=ptr->next;
    }

    SingleCircularListNode *newData = new SingleCircularListNode(data);
    newData->next = head;

    ptr->next = newData;

    head = newData;

}


int main() {
    SingleCircularListNode *head = nullptr;
    addNodeAtBeg(head, 5);
    addNodeAtBeg(head, 6);
    addNodeAtBeg(head, 7);
    addNodeAtBeg(head, 8);
    printLinkedList(head);

}