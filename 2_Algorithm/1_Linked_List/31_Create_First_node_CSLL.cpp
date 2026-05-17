#include <iostream>
using namespace std;

struct SingleCircularListNode {
    int data;
    SingleCircularListNode *next;

    SingleCircularListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }
    SingleCircularListNode(int data, SingleCircularListNode *next) {
        this->data = data;
        this->next = next;
    }
};
void printLinkedList(SingleCircularListNode *&head) {
    if (head == nullptr) {
        cout<<"Linked List is empty";
        return;
    }
    SingleCircularListNode *ptr = head;
    do {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while (ptr != head);
    cout<<endl;
}

SingleCircularListNode* createFirstNode(int data) {
    SingleCircularListNode *newNode = new SingleCircularListNode(data);
    newNode->next = newNode;
    return newNode;
}

int main() {
    SingleCircularListNode *head = createFirstNode(5);
    printLinkedList(head);
}