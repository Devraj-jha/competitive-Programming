#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector <int> n; //vector declartion

  n.push_back(1);
  n.emplace_back(4);

  vector<pair<int,int>> p;

  vector <int> v = {2,3,4,5,6,7,8};
 
  vector <int> v2(v);
  //copy v into v2;




vector<int> vv = {1,2,3,4,5};

cout<<vv.back()<<endl; //v.back() points to last element.

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){

  cout<<*it<<" " ;


}

for(auto it = v.begin(); it != v.end(); it++){
  cout<<*it <<" ";
}//auto is autoamtically used to detect data type of a give data.


for(auto it : v){
  cout<<it <<" ";
}

//erase
v.erase(v.begin());
//v.erase(start condtion , end )

//insert 
vector<int> s(2,100);
s.insert(s.begin(),200); //adds 200 to start

s.size(); //gives size of vector
s.pop_back();//removes last element

//swap is use to swap 2 vectors.



}