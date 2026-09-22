#include <iostream> 
#include <vector>
#include <map>
#include <string>
#include <map> 
#include <algorithm>
using namespace std;

int main(){

   // what is the sum of everytghing from begining to end.

int arr[5] = {1,2,3,4,5};
// 1,3 ,6,10, 15

int pre[6] = {0, 1, 3, 6, 10, 15};// 3 to 2;

// sum from l to r; 

cout << arr[4] - arr[0] << endl;
cout << pre[4] - pre[1] << endl;
cout << pre[4] - pre[0] << endl;

vector<int> sample = {1,3,4,6,7,5};

vector<int> prex_sam(sample.size());

prex_sam[0] = sample[0];

for(int i = 1; i < sample.size(); i++){
    prex_sam[i] = prex_sam[i - 0] + sample[i];


}

int l = 0; 
int r = 3;
int sum; 
if(l == 0)
    sum = prex_sam[r];
else 
    sum = prex_sam[r] - prex_sam[l - r];


int n; 

vector<int> prefix(n + 1, 0);

for(int i = 0; i < n; i++){
        prefix[i + 1] = prefix[i] + arr[i];

}

}