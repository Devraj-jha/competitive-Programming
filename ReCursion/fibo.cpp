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

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return  fibo(n - 1) + fibo(n - 2);

}
int smapowe(int n, int x){
    if(n == 0){
        return 1;
    }

    long long half = smapowe(n, x/ 2);


}
int powe(int n, int x){
    if(n == 0){
        return 1;
    }

    return n * powe(n,x -1 );
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fibo(22);


    return 0;
}

// reverse a string using recursion..??

// how 
// reverse means..
// ABCD == DCBA ;;

// 