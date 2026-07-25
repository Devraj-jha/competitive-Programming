#include <iostream>

struct node {
    int data; 
    node* next;

    node(int val ){
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

    int target = 20;

    bool found = false;
    node* temp = head; 

    while(temp != nullptr){
        if(temp-> data == target){
            found = true; 
        }
        temp = temp-> next;
    }
    std::cout << found;
}