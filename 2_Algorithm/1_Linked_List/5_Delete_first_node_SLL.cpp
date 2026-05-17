#include <iostream>
#include "SingleListNode.h"
using namespace std;

void deleteFirstNode(SingleListNode *&head) {
    if (head->next == nullptr) {
        head = nullptr;
        return;
    }
    SingleListNode *keep = head;
    head = head->next;
    free(keep);
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    deleteFirstNode(head);

    printLinkedList(head);

}