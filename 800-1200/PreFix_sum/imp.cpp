//sum from beginning to every index. 

#include <iostream>
#include <vector>
using namespace std; 

int main(){

    int a[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i = 0 ; i < 5; i++){
        sum = sum + a[i];
        a[i] = sum;
    }
      for(int i = 0 ; i < 5; i++){
        cout << a[i] << " ";
    }
     int b[5] = {1,2,3,4,5};
    vector<int > pre(5);

    pre[0] = b[0];

    for(int i = 0; i < 5; i++){
        pre[i] = pre[i - 1] + b[i];
    }
    
}

// for l to r.
// prefix[r] - prefix[l - 1]