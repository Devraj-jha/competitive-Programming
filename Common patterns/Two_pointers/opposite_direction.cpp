#include <iostream>
using namespace std; 
// one pointer at the beginning
// put another at the end.
// move them both toward each other... on some condtion.

// without it two loops will be created.


bool pairSum(vector<int> &v, int target){
    int l = 0; 
    int r = v.size() - 1 ;
    
    while(l < r){
        int sum = v[l] + v[r];

        if( sum == target){
            return true;
        }else if(sum < target) {
            l--;
        }else {
            r--;
        }
    };
return false;

}
bool isPalidrome(string s){
    int l = 0; 
    int r = s.size() - 1; 
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++; 
        r--; 
    }
    return true;
}
int main (){
    
    cout << isPalidrome("aaa");

}