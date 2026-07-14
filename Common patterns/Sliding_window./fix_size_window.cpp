#include <iostream> 
using namespace std;
// find maimum sum of any sub array of size 3///



int main(){
// when you we have to process all the con
   
// 
vector<int> v = {3,2,34,2,1,3,1}; 
int k = 3; 

int n = v.size();
int window_sum = 0; 


for(int i = 0; i < k; i ++){
 window_sum += v[i];

}

int maxsum = window_sum; 

for(int i = k ; i <v.size(); i++){
    window_sum += v[i];
    window_sum -= v[k -1 ];


    maxsum = max(window_sum, maxsum);

}
cout << maxsum << endl;
}

