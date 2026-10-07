#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void change(int &x){
        x= 10; 
 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int arr[] = {1,2,3,4,5};

    int * q = &arr[0];

    cout << *(q + 1) << endl;
    int *p =  arr; 

    // doing p + 1 => makes it move to next pointer..

    // array decay means aray loses its array type behavaiour adn become like a pointer.




    //. referecne varible..

    int y = 10; 
    int &x = y; 

    // x anotther name for y.


    int yy = 1000; 

   change(yy);

    cout << yy << endl;
    return 0;

    
}
void print(const int& x){
    cout << x; 
    // it can't cahnge the orignal
}

// for large object it is useful as it doens't create the copy.


