#include <iostream>
#include <iostream>

using namespace std;

int main(){
//till now i have studied data types now i need to study containers in detail. 
// so that I can easily manipulate data it is a data thing after all.

//
  int arr[5];
  //here we are  declaring an array
 //that will hold 5 integers
 // we can to 
 // => indexing 
 // => but it is fixed and that is the problem
//so we use vecotors

vector<int>  v = {1,2,3};
v.push_back(10);
//adds 10 at last of the vector
v.pop_back();
//remvoes the last element
v.at(4);
//it is use to acess safely a data

v.size(); //number of elemnts



}