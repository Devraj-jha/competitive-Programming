#include <iostream>
using namespace std;
struct node {
    int data; 
    node* next; 

    node(int val){
        data = val; 
        next = nullptr;
    }
};
    int main(){
      node* head = new node(10);
      node* first = new node(20);
      node* second = new node(30);
      node* third = new node(40);

    head->next = first;
    first->next = second;
    first->next->next = third;
    
    node* temp = head;
        int cn = 0;
    while(temp != nullptr){
        temp = temp-> next; 
        cn++;
    }
        cout << cn;
    }
