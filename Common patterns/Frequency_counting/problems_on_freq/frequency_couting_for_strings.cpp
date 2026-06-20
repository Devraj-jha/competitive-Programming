//count frequncy of each characters of a string..

#include <iostream> 
#include <string>
#include <unordered_map>
using namespace std;

int main(){
 string s = "banana"; 
 unordered_map <char,int> freq; 
 for(auto x : s){
    freq[x]++;
 }
   
 for(auto p : freq){
    cout << p.first << " -> " << p.second << endl;
 }
}