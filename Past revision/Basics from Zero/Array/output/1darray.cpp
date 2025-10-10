#include <iostream>


using namespace std;

int main(){

  int number[3] = {1,3,4}; //here I am declaring an array a data struture for storing data in sequence
  //array has fix size 
  //indexing start from zero and we can acesss any eleements
  cout<<number[0]<<endl; //output will be 1
  
  for(int i = 0 ; i<3;i ++ ){
    cout<<number[i] <<endl; //here we are priting the entire array data
  }
  //to check the size of an array

  cout<<sizeof(number) <<endl;
  cout<<sizeof(number[0])<<endl;


  int n = sizeof(number)/sizeof(number[0]);

  cout<<n<<endl;

  //ok now I know something like array exist I can exapand my knowledge future 


}