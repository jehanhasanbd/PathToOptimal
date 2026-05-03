#include <iostream>
using namespace std;

struct SingleListNode {
    int data;
    SingleListNode *next;

    SingleListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }
    SingleListNode(int data, SingleListNode *next) {
        this->data = data;
        this->next = next;
    }
};
void printLinkedList(SingleListNode *&head) {
    if (head == nullptr) {
        cout<<"Linked List is empty";
        return;
    }
    SingleListNode *ptr = head;
    while (ptr) {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

SingleListNode* createFirstNode(int data) {
    return new SingleListNode(data);
}

int main() {
    SingleListNode *head = createFirstNode(5);
    printLinkedList(head);
}