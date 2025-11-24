#include <iostream>
using namespace std;

int main(){


  int a;
  a = 4;
   int *p = &a;

  cout << &a << endl;

  cout << &p << endl;
  cout << a << endl;
  cout << p << endl;
  return 0;
}