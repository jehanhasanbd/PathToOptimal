#include <iostream>
#include "DoublyListNode.h"
using namespace std;

bool checkAscending(DoublyListNode *&head) {
    return head==nullptr || head->next==nullptr || (head->data < head->next->data && checkAscending(head->next));
}

int main() {
    DoublyListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<checkAscending(head);



}