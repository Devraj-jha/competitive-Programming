#include <iostream> 
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    int l = 0; 
    int sum = 0; 
    int target = 6;
    vector<int> v = {1,2,3,4,5};
    int ans = INT_MAX;
    for(int r = 0; r < v.size(); r++ ){
        sum += v[r];

        while(sum >=  target){
            ans = min(ans,r - l + 1);
            sum -= v[l];
            l++;
        }
    }
    cout << ans << "\n";
}