#include <iostream>
#include "SingleListNode.h"
using namespace std;

void reverseLinkedList(SingleListNode *&head) {
    SingleListNode *prev = nullptr;
    SingleListNode *curr = head;
    SingleListNode *next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    reverseLinkedList(head);
    printLinkedList(head);



}