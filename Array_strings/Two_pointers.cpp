#include <iostream> 
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

   // 1 2 3 4 5 6 7;

   // use two variables and pointers to traverse through the array.

    vector<int> a = {1, 2, 3, 4, 6, 8, 9};

    int target = 10;

    int L = 0;
    int R = a.size() - 1;

    while (L < R) {
        int sum = a[L] + a[R];

        if (sum == target) {
            cout << a[L] << " " << a[R] << '\n';
            break;
        }
        else if (sum < target) {
            L++;
        }
        else {
            R--;
        }
    }

}

// opposite direction ??

// sorted array.
// pair some.
// 