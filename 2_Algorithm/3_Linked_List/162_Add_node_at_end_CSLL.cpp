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

void addNodeAtEnd(SingleCircularListNode *&head, int data) {
    if (head == nullptr) {
        SingleCircularListNode *newNode = new SingleCircularListNode(data);
        newNode->next = newNode;
        head = newNode;

        return;
    }
    SingleCircularListNode *ptr = head;
    do {
        ptr=ptr->next;
    }while (ptr->next != head);

    SingleCircularListNode *newNode = new SingleCircularListNode(data);
    newNode->next = head;
    ptr->next = newNode;
}



int main() {
    SingleCircularListNode *head = nullptr;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    printLinkedList(head);

}