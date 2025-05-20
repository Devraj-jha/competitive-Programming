#include <iostream>
using namespace std;


void greet(){
  cout<<"hello world";
}
int add(int a,int b){

  return a + b;
//here i learned how to crreate a function and define function
//return type means what the function is written..

}
//ok if we want to change value inside an function 
//we will use &a we will pass value by reference.






int main(){


greet();
int r = add(3,4);//here we are learning to call functions
cout<<r;





  
  return 0;

}