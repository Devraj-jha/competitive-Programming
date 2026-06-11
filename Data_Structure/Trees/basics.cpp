//tree is a way of orgainziing data, 
// that forms hierachy.
//folder orgainzer 
// html helemetn

// Fast Searching
// File systems
// Documents 
    //Notes 
        //math.txt
    //Project 
        //game.cpp
//complier..

//a + b + c. -> builds a three internally.

#include <iostream>
using namespace std; 

struct node
{
    int data; 
    node* left; 
    node* right;
    node(int val){
        data = val; 
        left = nullptr; 
        right = nullptr;
    }
};



int main(){
  //  node n(10);
    int x = 10;
    cout << &x << endl;
    int* y = &x;
    cout << x << endl; 
    cout << y << endl;
    node* root = new node(12);
    root->left = new node(19);

    root->right = new node(23);
    
}
