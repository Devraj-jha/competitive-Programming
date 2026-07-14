#include <iostream>
#include <map>
#include <vector>

// map is a ds which stores key value pair.

using namespace std; 

int main(){
    vector<int> v = {1,2,3,3,2,2,1,1,1};
    map <int,int> freq;
    map <char, int> freq2;
    vector<char> s = {'a','a', 'b', 'b','c','d'};

    for(int x : v){
        freq[x]++;
    }
    for(auto x: s){
        freq2[x]++;

    }

    for(auto p : freq){
        cout << p.first << "->>" << p.second << endl; 

    }
     for(auto p : freq2){
        cout << p.first << "->>" << p.second << endl; 

    }

}