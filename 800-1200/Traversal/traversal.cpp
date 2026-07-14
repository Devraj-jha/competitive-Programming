#include <iostream> 
#include <vector>

using namespace std;

int main(){

   vector<int> v; 
   v = {1,2,3,4,5};
   // forward traversal
   for(int i = 0; i < v.size(); i ++){
    cout << v[i] << " "; 
   }
   //backward traversal
   for(int i = v.size() - 1; i >= 0; i--){
      cout << v[i] << " ";
   }
   cout << endl; 

   //traversal with step size 

   for(int i = v.size() - 1; i >= 0; i+=2){
      cout << v[i] << " ";
   }
   cout << endl; 

   //subarray traversal // part of aray
   int l = 2; 
   int r = 4; 

   for(int i = l ; i <= r; i++){
      cout << v[i] << " ";
   }
   
   //odd postion only 
   //or even

   

}