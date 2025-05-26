#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main(){

pair<string, int> p1 = {"Devraj", 90};


cout <<p1.first <<"  Name of the student \n";
cout<<p1.second <<"  marks of student";

vector<pair<int,int>> vp = {
  {1,2},{3,4},{5,6}
};


pair<int,pair<int,int>> pp =  {
  1,{1,2}};


 int b = pp.first ;
  

vector<pair<int,string>> students = {
 {10,"DEVRAJ JHA"}, {20,"Mukesh"}
};

}
