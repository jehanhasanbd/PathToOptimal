#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void reverseLinkedList(DoublyListNode *&head) {
    if (head==nullptr || head->next==nullptr) {
        return;
    }

    DoublyListNode *curr = head;
    DoublyListNode *temp = nullptr;

    while (curr != nullptr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;   // move forward (prev now holds old next)
    }
    head = temp->prev;
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    reverseLinkedList(head);
    printLinkedList(head);



}