#include <iostream>
#include <vector>
#include <unordered_map>
// for pure frequecy couting this thing is faster. 
// as this is not sorted automatically..

using namespace std;

int main(){
unordered_map <int, int> u; 
vector<int > v = {1,2,3,3,2,2,1,1,1,-1,-2,-2}
;
for(auto i : v){
   u[i]++;

}
for(auto i : u){
   cout << i.first << " " << i.second; 
   cout << endl;
}


}
