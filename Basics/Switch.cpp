#include <iostream>

using namespace std;

int main(){

  switch (2) {
    case 1: cout << "A";
    case 2: cout << "B";   // will print B
    case 3: cout << "C";   // then C (fall-through!)
}

  return 0;
}