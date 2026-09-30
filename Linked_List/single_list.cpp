#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val){
        data = val; 
        next = nullptr;
    }
};

int main() {
Node* first = new Node(10);
Node* second = new Node(20);
Node* third = new Node(30);


// insertion 

first->next = second;
second->next = third;
third->next = nullptr;

Node* begin = new Node(5);
begin->next = first;
first = begin;
Node* head = first;


    Node* temp = head;

    while(temp != nullptr){

        cout << temp->data << endl;
        cout << temp->next << endl;

        temp = temp -> next;
    }
    return 0;
}