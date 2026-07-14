//each box contains soe data.
// each box also contaisn.. adress of the next.
// 
#include <iostream>
using namespace std; 

struct ListNode {
    int val; 
    ListNode *next; 
    
    ListNode( int x ){
        val = x; 
        next = nullptr;
    };
    // node contains pointers to next node and value..


};
int main(){
    ListNode* head; 
    ListNode* curr = head; 
    
}