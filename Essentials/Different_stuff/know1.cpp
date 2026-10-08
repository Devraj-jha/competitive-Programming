#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// struct  => a way to create your own data type.. containing multiple piece of data..


struct Student {
    string name; 
    int age; 
    double marks;

};

struct Point {
    int x; 
    int y ; 
    Point(int x, int y){
           x = x; 
           y = y;
    }
};




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // local variable are => declared inside a block..
    // can't be accessed from outside..


    if(true){
        int y = 20;

        cout << y << endl;

        Student s; 
        // s -> object 
        s.name = "rahul";
        

        Point p(10, 20);

    }


    // Lambda function

    auto add = [] ( int a , int b){
        return a + b; 


    };

    // 
    vector<int> v = {1,2,32,3,45};
    sort(v.begin(), v.end(), [](int a,int b){
        return a < b; 

    });

    cout << v.front() << endl;

    return 0;
}

// vector<vector<int>> v( 3, vector<int> (4))