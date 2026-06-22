#include <iostream> 
using namespace std;
//prime number is only divisible by itself and 1.
bool brute_force_prime(int n){

    if(n <=1 ) return false;


    for(int i = 2; i < n; i++ ){

        if(n % i == 0 ){
            return false;
        }


    }
    return true;
}
bool isprime(int n){
    if(n <=1 ) return false; 

    for(int i = 2 ; i * i <= n; i++){
        if(n % i == 0)
           return false;
    }
    return true;
}
int main(){
cout << isprime(97);
cout << endl; 
cout << brute_force_prime(4);
cout << endl;
   // 2 , 3 ,5 etc..


}