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

void printLinkedList(SingleListNode *head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty";
        return;
    }

    SingleListNode *ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

void addNodeAtEnd(SingleListNode *&head, int data) {
    if (head == nullptr) {
        head = new SingleListNode(data);
        return;
    }
    SingleListNode *ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = new SingleListNode(data);
}

void addNodeAtEndHT(SingleListNode *&head,SingleListNode *&tail, int data) {
    if (head == nullptr) {
        head = new SingleListNode(data);
        tail = head;
        return;
    }

    tail->next = new SingleListNode(data);
    tail = tail->next;
}


int main() {
    SingleListNode *head = NULL;
    addNodeAtEnd(head, 5);
    addNodeAtEnd(head, 6);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 8);
    printLinkedList(head);

    head = NULL;
    SingleListNode *tail = NULL;
    addNodeAtEndHT(head, tail, 5);
    addNodeAtEndHT(head, tail, 6);
    addNodeAtEndHT(head, tail, 7);
    addNodeAtEndHT(head, tail, 8);
    printLinkedList(head);

}