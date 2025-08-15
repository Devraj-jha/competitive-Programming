//vectors are container to store data
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v = {1,2,3,4};
    
    vector<int> b(4);
    v.push_back(10);
    //adds 10 in the end 
    v.pop_back(); //removes 10

    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl; //safe access

    cout<<v.front(); //first elements
    cout<<v.back();//last element

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    for(auto x : v){
        cout<< x << " ";
    }


    //some more methods
    v.size(); //number of elements
    v.empty(); //checks if vecotr is empty
    v.clear(); //remvoe all elemetns
    

}