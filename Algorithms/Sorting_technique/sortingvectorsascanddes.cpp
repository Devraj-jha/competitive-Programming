#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

vector <int> v = {4,3,2,1};
//ok we declare an array here

sort(v.begin(), v.end());

cout<<"Vectors in aceding order";
for(int i = 0; i<v.size(); i++){
  cout<<v[i]<<endl;

}

//deceding order
cout<<"Desceding order";
sort(v.begin(), v.end(),greater<int> ());
for(int i : v){
  cout<<i<<endl;
}
    
//ok so Now i leartn how to sort a vector in asceding and desceding order


}