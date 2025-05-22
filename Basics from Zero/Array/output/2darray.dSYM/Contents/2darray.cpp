#include <iostream>
using namespace std;

int main(){

  int arr[3][4]; //3 rows 4 columns row => horizontal thing col => verticl thing

  for( int i = 0; i<3 ; i++){
    for(int j = 0; j<4; j ++){

      cout<<"Enter value at " << i << "and" << j << "place";

      cin>> arr[i][j];
    }
  }

  for( int i = 0; i<3 ; i++){
    for(int j = 0; j<4; j ++){


      cout << arr[i][j] <<"    ";
    }

    cout << endl;
  }







  
  return 0;
}