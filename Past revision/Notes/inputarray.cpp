#include <iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];//showing error but when we take input it will allow it

  for(int i =0; i<n; i++){
    cin>>arr[i];
    //used to take inputs
  }

  
  for(int i =0; i<n; i++){
    cout<<arr[i]<<endl;
    //used for output
  }
}
  