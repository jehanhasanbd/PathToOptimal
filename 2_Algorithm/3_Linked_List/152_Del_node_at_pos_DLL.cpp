#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void deleteNodeAtPosition(DoublyListNode *&head, int pos) {
    if (head == nullptr) {
        return;
    }

    // delete first node
    if (pos == 0) {
        DoublyListNode *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // move to (pos - 1)
    DoublyListNode *ptr = head;
    for (int i = 0; i < pos-1; ++i) {
        if (ptr == nullptr || ptr->next == nullptr) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        ptr = ptr->next;
    }

    if (ptr->next == nullptr) {
        cout << "Position out of bounds!" << endl;
        return;
    }
    DoublyListNode *temp = ptr->next;
    ptr->next = ptr->next->next;
    ptr->next->prev = ptr;
    delete temp;

}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 10);
    addNodeAtEnd(head, 11);
    addNodeAtEnd(head, 8);
    deleteNodeAtPosition(head, 5);
    printLinkedList(head);



}