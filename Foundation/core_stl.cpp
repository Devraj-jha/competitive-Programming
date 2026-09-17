// pair a ds -> that holds two exact values.

#include <iostream>
#include <utility>
#include <sstream>
#include <unordered_map>
using namespace std;

int main(){
    pair<int,int> point = {1,2};

    cout << point.first; 
    cout << point.second;

    // we can have pairs inside pairs.

    // string stream lets as treat a string like an input string, so we can easily extact data and inputs. using >>




    unordered_map<string,int> freq;

    string s = "apple banana apple orange banana apple";
    stringstream ss(s);
     
    string word; 
    while(ss >> word){
        freq[word]++;   
    }
 
    for(auto x : freq){
        cout << x.first << " -> " << x.second << endl;

    }

string s = "Alice 25 Bob 30 Charlie 22";


}