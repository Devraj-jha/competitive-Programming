/// smallest positive number divisibile by Both number..

#include <iostream> 
#include <numeric>
using namespace std;

int lcm_brute(int a ,int b){
    int mx = max(a,b);
    while(true){
        if(mx % a == 0 && mx % b == 0){
            return mx;
        }
        mx++;
    }
}
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
// lcm * gcd = a * b;
long long lcm(long long a, long long b){
    return(a /gcd(a,b)) *b ;
}
int main(){
   
   cout << lcm(12,19);
   cout << endl;
   cout << lcm_brute(2,3);
}