#include <iostream>
#include "SingleListNode.h"
using namespace std;


void addNodeAtBeg(SingleListNode *&head, int data) {
    if (head == nullptr) {
        head = new SingleListNode(data);
        return;
    }
    SingleListNode *newData = new SingleListNode(data);
    newData->next = head;
    head = newData;

}


int main() {
    SingleListNode *head = nullptr;
    addNodeAtBeg(head, 5);
    addNodeAtBeg(head, 6);
    addNodeAtBeg(head, 7);
    addNodeAtBeg(head, 8);
    printLinkedList(head);

}