#include <iostream>
#include "SingleCircularListNode.h"
using namespace std;

void addNodeAtPosition(SingleCircularListNode *&head, int data, int pos) {
    if (pos == 0) {
        SingleCircularListNode *newNode = new SingleCircularListNode(data);

        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        }

        SingleCircularListNode *ptr = head;
        while (ptr->next != head) {
            ptr = ptr->next;
        }

        newNode->next = head;
        ptr->next = newNode;
        head = newNode;
        return;
    }

    SingleCircularListNode *ptr = head;
    for (int i = 0; i < pos-1; ++i) {
        if (i>0 && ptr==head) {
            cout << "Out of bound"<<endl;
            return;
        }
        ptr = ptr->next;
    }
    if (ptr == head && pos!=0) {
        cout << "Out of bound"<<endl;
        return;
    }

    SingleCircularListNode *newNode = new SingleCircularListNode(data);
    newNode->next = ptr->next;
    ptr->next = newNode;

}

int main() {
    SingleCircularListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    addNodeAtPosition(head, 10, 0);

    printLinkedList(head);

}