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


using ll = long long ; 
using vi = vector<int> ; 

// type def is older..

typedef long long ll ; 


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    const auto PI = 3.14; // IT CAN'T BE MODIFIED

    vi v (26,0);

    auto x = 12; 

    // cpp figure out the type.


    // iterators

    vector<int> v = {10,20,3,4,6,78};

    // pointer like object 
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++ ){
        cout << *it << endl;
    }
    auto it = v.begin();
   

    // range based for loop..

    for(auto x : v){
        cout << x << endl; 
        // for every x in v do this.
    }
    return 0;
}