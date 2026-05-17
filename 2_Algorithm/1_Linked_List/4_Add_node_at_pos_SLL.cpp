#include <iostream>
#include "SingleListNode.h"
using namespace std;

void addNodeAtPosition(SingleListNode *&head, int data, int pos) {
    SingleListNode *ptr = head;
    if (pos == 0) {
        SingleListNode *newNode = new SingleListNode(data);
        newNode->next = head;
        head =newNode;
        return;
    }
    while (pos != 1) {
        pos--;
        ptr = ptr->next;
    }
    SingleListNode *newNode = new SingleListNode(data);
    newNode->next = ptr->next;
    ptr->next = newNode;

}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    addNodeAtPosition(head, 10, 4);

    printLinkedList(head);

}