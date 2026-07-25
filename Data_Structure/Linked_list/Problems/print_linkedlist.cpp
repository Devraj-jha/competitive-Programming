#include <iostream>
using namespace std; 

struct Node{
    int data; 
    Node* next; 

    Node(int val ){
        data = val; 
        next = nullptr;
    }
};

int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);

    head->next = first; 
    first->next = second;

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
        
    }
}
