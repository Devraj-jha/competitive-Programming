#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main(){


    pair<int,int> p ={3,4};
    cout<<p.first <<" "<< p.second<<endl;

    pair<int,int> q;
    q = make_pair(10,20);

    pair<int,pair<int,int>> np = {1,{2,3}};

    cout<<np.second.first; 

   
    //we can also declare an array of paris
   
   
    pair<int,int> arr[2]= {{1,3}, {2,4}};




    

}
