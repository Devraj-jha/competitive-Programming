//each element -> store a data 
// Where next element is ..


#include <iostream>
using namespace std; 

struct  Node
{
    int data; 
    Node* next; 
    Node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
   Node* head = new Node(10);
   Node* second = new Node(20);
    Node* third = new Node(30);
   head->next = second;
}