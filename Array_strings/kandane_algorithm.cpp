//subarray contiguous with the largest sum.
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


int kadane(vector<int> & v){
    int currSum = v[0];
    int maxSum = v[0];

    for(int i = 1; i < v.size(); i++){

        currSum = max(v[i], currSum + v[i]);

        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> v = {1,2,3,4,5,6, -1,-2, 1, -3, 4, -1, 2, 1, -5, 4}
    



    
;
}