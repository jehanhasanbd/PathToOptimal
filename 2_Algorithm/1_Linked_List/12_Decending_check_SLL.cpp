#include <iostream>
#include "SingleListNode.h"
using namespace std;

bool checkDescending(SingleListNode *&head) {
    return head==nullptr || head->next==nullptr || (head->data > head->next->data && checkDescending(head->next));
}

int main() {
    SingleListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);

    cout<<checkDescending(head);



}