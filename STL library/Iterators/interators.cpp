#include <iostream>
#include <vector>

using namespace std;
int main(){
  //iterators points to the memory where elements lie.

  vector<int> v =  {1,2,3,4,5};
  vector<int>::iterator it =  v.begin();
  it++;
  cout<< *it <<" ";




//v.begin() => is an iterators.its starts with starting.
//v.end()- points to right of end;
//when you do it-- it points to last element




}