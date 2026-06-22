#include <iostream> 
#include <vector>
using namespace std;
bool isprime(int n){
    if(n <=1 ) return false; 

    for(int i = 2 ; i * i <= n; i++){
        if(n % i == 0)
           return false;
    }
    return true;
}

int main(){

int N = 100000000;

vector<bool> prime(N + 1, true);

prime[0] = false;
prime[1] = false;

for(int i = 2; i * i <= N; i++)
{
    if(prime[i])
    {
        for(int j = i * i; j <= N; j += i)
        {
            prime[j] = false;
        }
    }
}
for(int i = 2; i <= N; i++)
{
    if(prime[i])
        cout << i << " " << endl;
}
}
