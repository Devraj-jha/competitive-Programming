#include <iostream>
//Bitwise operator.....
using namespace std;

int main(){
 
     //and operators basically it comparees
    //the binary digit of both places 
    //and outpt a value


    int a = 5; //0101
    int b = 3; //0011

    cout<< (a & b) <<"\n";
   //0001 -> 1
    cout<< (a | b) <<"\n";
    //0111 -> 7
    cout<< (a ^ b) <<"\n";
    //xor operator 
    //1 if bits are idff (0 if same)
    cout<< ( ~a  ) <<"\n";
    //flips all bits

    

      cout << "a << 1: " << (a << 1) << "\n"; // shift left by 1 -> 10
      cout << "a >> 1: " << (a >> 1) << "\n"; // shift right by 1 -> 2






  return 0;
}

