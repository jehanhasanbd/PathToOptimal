#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void deleteLastNode(DoublyListNode *&head) {
    // null node
    if (head == nullptr)
        return;

    // single node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    DoublyListNode *ptr = head;
    while (ptr->next->next != nullptr) {
        ptr = ptr->next;
    }
    DoublyListNode *temp = ptr->next;
    ptr->next = nullptr;
    delete temp;
}

void deleteLastNodeHT(DoublyListNode *&head, DoublyListNode *&tail) {
    // null node
    if (head == nullptr)
        return;

    // single node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    DoublyListNode *temp = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp;
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    deleteLastNode(head);
    printLinkedList(head);
    printLinkedListReverse(head);

    head = NULL;
    DoublyListNode *tail = NULL;
    addNodeAtEndHT(head, tail, 5);
    addNodeAtEndHT(head, tail, 6);
    addNodeAtEndHT(head, tail, 7);
    addNodeAtEndHT(head, tail, 8);
    deleteLastNodeHT(head, tail);
    printLinkedList(head);
    printLinkedListReverse(head);

}