#include <iostream>
using namespace std;

int main(){
  int b[5] = {1, 2, 3, 4, 5};
  int size = sizeof(b)/sizeof(b[0]);
  cout<< "Size of array: " << size << endl;
  cout<<sizeof(b) << endl;
  cout<<sizeof(b[0]) << endl;
}