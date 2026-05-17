#include <iostream>
#include "DoublyListNode.h"
using namespace std;


void addNodeAtBeg(DoublyListNode *&head, int data) {
    if (head == nullptr) {
        head = new DoublyListNode(data);
        return;
    }
    DoublyListNode *newData = new DoublyListNode(data);
    newData->next = head;
    head->prev = newData;
    head = newData;

}


int main() {
    DoublyListNode *head = nullptr;
    addNodeAtBeg(head, 5);
    addNodeAtBeg(head, 6);
    addNodeAtBeg(head, 7);
    addNodeAtBeg(head, 8);
    printLinkedList(head);
    printLinkedListReverse(head);

}