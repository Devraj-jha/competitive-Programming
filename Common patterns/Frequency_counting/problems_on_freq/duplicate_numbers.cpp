// find dupicate number.
#include <iostream> 
#include <unordered_map>
using namespace std;

int main(){
 int arr[5] = {1,2,2,3,4};
unordered_map <int, int> f; 
for(auto x : arr){
    f[x]++;
}
for(auto x : f){
    if(x.second > 1){
        cout << x.first ;
    }
}
}