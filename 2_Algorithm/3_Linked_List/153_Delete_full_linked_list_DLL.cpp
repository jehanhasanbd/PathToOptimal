#include <iostream>
#include "SingleListNode.h"
using namespace std;

void deleteFullLinkedList(SingleListNode *&head) {
    if (head == nullptr)
        return;

    while (head != nullptr) {
        SingleListNode *temp = head;
        head = head->next;
        delete temp;
    }
}



int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    deleteFullLinkedList(head);
    printLinkedList(head);


}