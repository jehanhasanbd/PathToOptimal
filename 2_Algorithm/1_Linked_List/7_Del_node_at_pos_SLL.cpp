#include <iostream>
#include "SingleListNode.h"
using namespace std;

void deleteNodeAtPosition(SingleListNode *&head, int pos) {
    if (head == nullptr) {
        return;
    }

    // delete first node
    if (pos == 0) {
        SingleListNode *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // move to (pos - 1)
    SingleListNode *ptr = head;
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
    SingleListNode *temp = ptr->next;
    ptr->next = ptr->next->next;
    delete temp;

}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    deleteNodeAtPosition(head, 4);
    printLinkedList(head);



}