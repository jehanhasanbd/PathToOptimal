#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void addNodeAtPosition(DoublyListNode *&head, int data, int pos) {
    DoublyListNode *ptr = head;
    if (pos == 0) {
        DoublyListNode *newNode = new DoublyListNode(data);
        newNode->next = head;
        head =newNode;
        return;
    }
    for (int i = 0; i < pos-1; ++i) {
        if (ptr==nullptr || ptr->next==nullptr) {
            cout<<"Out of bound"<<endl;
            return;
        }
        ptr = ptr->next;
    }
    if (ptr->next == nullptr) {
        cout << "Position out of bounds!" << endl;
        return;
    }
    DoublyListNode *newNode = new DoublyListNode(data);
    newNode->next = ptr->next;
    newNode->prev = ptr;

    ptr->next->prev = newNode;
    ptr->next = newNode;

}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    addNodeAtPosition(head, 10, 0);

    printLinkedList(head);

}