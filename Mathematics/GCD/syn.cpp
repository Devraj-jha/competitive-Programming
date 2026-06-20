#include <iostream>
#include <numeric>

using namespace std;

int gcd1(int a, int b) {
    int ans = 1;

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            ans = i;
        }
    }
    return ans;
}

int gcd11(int a, int b) {
    if (b == 0)
        return a;

    return gcd11(b, a % b);
}

int main() {
    cout << std::gcd(12, 18) << endl;
    cout << gcd1(12, 18) << endl;
    cout << gcd11(12, 18) << endl;
}