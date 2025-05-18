#include <iostream>
using namespace std;

int main(){
  //data is the value or information your program works with..
  //like numbers characters, and text;

  int x; //interger data type
  long y;//4 to 8 bytes
  long long z; // double of int
  float a; // decimals storeing 4 bytes
  double b; //decimals but with more bytes
  bool trueFalse; //use to store true or false
  char single; //single character storing;
// no data use function

//above all are primite data types

//derived data types

int arr[x]; //array stores multiples value of same data type 
int* ptr; // Memory adress of another variables
//&a it means value adress of an varaible

//strctures data type

struct point{

  int x;
  int y;

};
//first we defnine a blue print for out new data type called point 
//here we are taking example of 2d coordinate system
//then we declare a varable with this new data type we created

point coord;
// then we will assign value to it

coord.x = 10;
coord.y = 20;
//alias of another variable means creating a new name of a of a second varabile 
// we are studying reference data types
//changes made through referece also affect the new variable because it referes to the same data type



int xx = 10;

int& reference = xx;



//now xx and refrence are same thing.
}

