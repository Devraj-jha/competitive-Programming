// function calling itself..

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


int sumoffirstn(int n){
    if(n == 1){
        return 1;
    }
    return n + sumoffirstn(n - 1);
}
int fact(int n){
    if(n == 1){
        return 1; 
    }
    return n * fact(n - 1);
}
void printnum(int n){
    if(n == 0){
        return;
    }
     printnum(n - 1);
         cout << n << " ";

}
void hello(){
    cout << "hello\n";
    hello();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << sumoffirstn(5);
   // hello();
    printnum(3);
    return 0;
}