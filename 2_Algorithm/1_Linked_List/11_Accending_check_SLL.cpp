#include <iostream>
#include "SingleListNode.h"
using namespace std;

bool checkAscending(SingleListNode *&head) {
    return head==nullptr || head->next==nullptr || (head->data < head->next->data && checkAscending(head->next));
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<checkAscending(head);



}