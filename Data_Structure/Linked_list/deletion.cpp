#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    // Create linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    // Delete first node
    Node* temp = head;    // Save old head
    head = head->next;    // Move head to second node
    delete temp;          // Delete old first node

    // Print linked list
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}