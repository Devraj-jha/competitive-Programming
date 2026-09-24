#include <iostream> 
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

   // we keep a window 
   // window = group of element
   // and we slide it
      vector<int> a = {2, 1, 5, 1, 3, 2};

    int k = 3;

    int windowSum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        windowSum += a[i];
    }

    int ans = windowSum;

    for (int i = k; i < a.size(); i++) {
        windowSum += a[i];       
        windowSum -= a[i - k];  

        ans = max(ans, windowSum);
    }

    cout << ans << '\n';

}