#include <iostream>
using namespace std; 

struct Node{
   int data;
    Node* next ; 

    Node(int val){
        data = val; 
        next = nullptr;
    }
};

int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* t = new Node(30);

  head->next = second;
  second->next = t;


  Node* tem = head;
  while(tem != nullptr){
    cout << tem->data << " ";

    tem = tem->next;
  }
}
