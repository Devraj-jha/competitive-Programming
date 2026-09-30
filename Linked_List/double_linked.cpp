#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>



using namespace std;


struct Node{
    int data; 
    Node* prev; 
    Node* next;

    Node(int val ){
         data = val; 
         prev = nullptr;
         next = nullptr;
    };
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node* head = new Node(10);

    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;


    // backward traversal;

    Node* temp  = head;

    while(temp ->next != nullptr){
        temp = temp->next;
    }

    while(temp != nullptr){
        cout << temp ->data << " ";
        temp = temp-> prev; 
    }
    return 0;
}