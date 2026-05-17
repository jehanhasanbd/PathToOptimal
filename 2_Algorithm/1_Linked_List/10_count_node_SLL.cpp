#include <iostream>
#include "SingleListNode.h"
using namespace std;

int lenOfLinkedListImp(SingleListNode *&head) {
    SingleListNode *ptr = head;
    int count = 0;
    while (ptr) {
        ptr = ptr->next;
        count++;
    }
    return count;
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<lenOfLinkedListImp(head);



}