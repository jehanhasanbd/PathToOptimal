#include <iostream>
#include "SingleListNode.h"
using namespace std;

void deleteLastNode(SingleListNode *&head) {
    // null node
    if (head == nullptr)
        return;

    // single node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    SingleListNode *ptr = head;
    while (ptr->next->next != nullptr) {
        ptr = ptr->next;
    }
    SingleListNode *temp = ptr->next;
    ptr->next = nullptr;
    delete temp;
}

void deleteLastNodeHT(SingleListNode *&head, SingleListNode *&tail) {
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

    SingleListNode *ptr = head;
    while (ptr->next->next != nullptr) {
        ptr = ptr->next;
    }
    SingleListNode *temp = ptr->next;
    ptr->next = nullptr;
    tail = ptr;
    delete temp;
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    deleteLastNode(head);
    printLinkedList(head);

    head = NULL;
    SingleListNode *tail = NULL;
    addNodeAtEndHT(head, tail, 5);
    addNodeAtEndHT(head, tail, 6);
    addNodeAtEndHT(head, tail, 7);
    addNodeAtEndHT(head, tail, 8);
    deleteLastNodeHT(head, tail);
    printLinkedList(head);

}