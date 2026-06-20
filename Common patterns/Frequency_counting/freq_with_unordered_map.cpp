#include <iostream>
#include <vector>
#include <unordered_map>
// for pure frequecy couting this thing is faster. 
// as this is not sorted automatically..

using namespace std;

int main(){
     vector<int> v = {2,2,2,3,3,3,3,1,1,1,1,29};
     unordered_map<int,int> freq; 
     
     for(int x : v){
        freq[x]++; 

     }
     for(auto p : freq){
        cout << p.first << "->" << p.second << endl; 
     }

}
