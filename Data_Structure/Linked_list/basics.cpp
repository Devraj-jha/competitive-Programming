//each box contains soe data.
// each box also contaisn.. adress of the next.
// 
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

int main(){
    Node* first = new Node(10);

    first->next = new Node(20);
    first ->next->next = new Node(30);

    Node* temp = first;
}