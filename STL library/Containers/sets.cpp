#include <set>
#include <iostream>
using namespace std;
//set is like container which stores
//unique elementw

int main(){

    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(5);

    for(int x : s){
        cout<<x <<" ";

    }

    s.erase(4); //erase the elements

    multiset<int> ms;

    ms.insert(4);
    ms.insert(5);
    ms.insert(6);

    //multiset is same as set just 
    //alows duplicate elements
    
 

    
}