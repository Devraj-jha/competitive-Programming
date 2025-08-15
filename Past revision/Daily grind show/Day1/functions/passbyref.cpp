#include <iostream>
using namespace std;


void printdata(const string &s){
  cout<< s << "\n";
}
//to pass large data 
//it is fast like ref. and safe (value dont chANGE)

void update(int &a) {
    a = a + 5;
}
//changes the original variable when we pass by refrecne.
int main(){
ios::sync_with_stdio(false); 
cin.tie(NULL);              





  return 0;
}