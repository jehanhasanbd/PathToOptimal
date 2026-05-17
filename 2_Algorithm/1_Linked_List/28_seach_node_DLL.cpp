#include <iostream>
#include "DoublyListNode.h"
using namespace std;

int searchData(DoublyListNode *&head, int data) {
    DoublyListNode *ptr = head;
    int count = 0;
    while (ptr) {
        if (ptr->data == data) {
            return count;
        }
        ptr = ptr->next;
        count++;
    }
    return -1;
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<searchData(head, 7);



}