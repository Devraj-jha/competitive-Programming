#include <iostream> 
using namespace std;

int main(){


    int arr[5] = {1,2,3,4,5};


    for(int i = 0; i < 5; i ++){
        cout << arr[i] <<endl;
    }
    cout <<"_________" <<endl;


    arr[3] = 30;
    arr[4] = 40;
    


  for(int i = 0; i < 5; i ++){
        cout << arr[i] <<endl;
    }

   
}