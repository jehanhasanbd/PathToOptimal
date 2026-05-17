#include <iostream>
#include "DoublyListNode.h"
using namespace std;

int lenOfLinkedListImp(DoublyListNode *&head) {
    DoublyListNode *ptr = head;
    int count = 0;
    while (ptr) {
        ptr = ptr->next;
        count++;
    }
    return count;
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<lenOfLinkedListImp(head);



}