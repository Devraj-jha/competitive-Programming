// use two pointers.. moving at differnt speed..

// slow movie 1 step..

// fast -> move 2 setps..


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


    /* data */
struct Node{
    int val; 
    Node* next;

    Node(int n){
        val = n; 
        next = nullptr;
    };
};

bool hasCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast -> next != nullptr ){

        slow = slow-> next;
        fast = fast-> next -> next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}