#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void deleteFirstNode(DoublyListNode *&head) {
    if (head->next == nullptr) {
        head = nullptr;
        return;
    }
    DoublyListNode *keep = head;
    head = head->next;
    head->prev = nullptr;

    delete keep;
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    deleteFirstNode(head);

    printLinkedList(head);

}