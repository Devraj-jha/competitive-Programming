#include <iostream>
#include <vector>

using namespace std; 

int main(){
vector <int> arr = {1,3,4,2,1}    ;
vector <int> prefix(arr.size());


prefix[0] = arr[0];

for(int i = 0; i < arr.size(); i++){
    prefix[i] = prefix[i - 1] + arr[i];

}
int l = 1;
    int r = 3;

    int sum;

    if(l == 0)
        sum = prefix[r];
    else
        sum = prefix[r] - prefix[l-1];

    cout << sum;


}