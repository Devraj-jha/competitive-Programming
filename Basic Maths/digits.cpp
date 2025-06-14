//7789
//if we want 9
//7789 % 10  =  9;
//digit extraction

#include <iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  while(n>0)
{
  int las  =  n%10;
  cout<<las <<endl;
  n =  n/10;
}




  
  return 0;
}