#include <iostream> 
using namespace std;

int main(){

    vector<int> a = {1,2,3,4,5,6};

    int n = a.size();

    int l = 0; 
    int r = n - 1; 
    int  t = 2;
    while(l <= r){
        int m = (l + r)/ 2; 

        if(a[m] == t){
            cout << "found";
            break;
        }
        else if(a[m] < t){
            l = m + 1;
        }else {
            r = m - 1;
        }
    }
}