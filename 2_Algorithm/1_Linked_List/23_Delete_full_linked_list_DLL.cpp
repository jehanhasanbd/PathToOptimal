#include <iostream>
#include "DoublyListNode.h"
using namespace std;

void deleteFullLinkedList(DoublyListNode *&head) {
    if (head == nullptr)
        return;

    while (head != nullptr) {
        DoublyListNode *temp = head;
        head = head->next;
        delete temp;
    }
}



int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    deleteFullLinkedList(head);
    printLinkedList(head);


}