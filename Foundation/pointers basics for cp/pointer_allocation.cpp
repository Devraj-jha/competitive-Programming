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

    
    int x = 10; 
    // automatic

    int *q = new int ; 

    *q = 100; 
        cout << *q << endl;

    delete q; 
    cout << *q << endl;

    int *p = new int; 

    // pointers point to a memeory that is no longer valid..

    // memory leak => memory allocated but i lost the pointer.s




     delete p;
    return 0;
}