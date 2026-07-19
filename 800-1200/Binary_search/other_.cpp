/// lower bound 
// the first poisition where value is greater and equal to target..


/// >= target
// first value which is greater or equal to the ting



// uppper bound leemnt is striclty greater than target


// 
#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> a={1,2,4,4,4,7};

    auto it1 = upper_bound(a.begin(), a.end(), 2);

    auto it2 = lower_bound(a.begin(), a.end(), 2);
   
}