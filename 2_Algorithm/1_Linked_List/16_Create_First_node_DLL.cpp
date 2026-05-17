#include <iostream>
using namespace std;

struct DoublyListNode {
    int data;
    DoublyListNode *next;
    DoublyListNode *prev;

    DoublyListNode(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};

void printLinkedList(DoublyListNode *head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty";
        return;
    }

    DoublyListNode *ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

DoublyListNode* createFirstNode(int data) {
    return new DoublyListNode(data);
}

int main() {
    DoublyListNode *head = createFirstNode(5);
    printLinkedList(head);
}