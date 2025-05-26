#include <iostream>
#include <list>
using namespace std;

int main(){


  list <int> ls;
  ls.push_back(10); //ads to end
  ls.push_front(5); //ads to front 
  for(auto x : ls){

    cout<< x << " ";
  }


}