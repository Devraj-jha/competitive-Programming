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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
    // next index -> ( i + 1) %  n; 

    // to land on any posistion => (i + k ) % n; 


    vector<int> v = {1,2,3,4,5,6};
    int n = v.size();
    for(int i = 0; i < n; i++){
        int next = (i + 1) % n; 

        cout << v[i] << " - > " << v[next] << endl;
        
    }  
    return 0;
}