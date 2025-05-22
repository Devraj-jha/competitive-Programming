// 4
// ****
// ***
// **
// *
#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i = 1; i <= n; i++) //the only use of this row is to determine the number of row .
{
    for(int j = n; j >=i; j--) {

        cout<<"*";
    }
    cout << endl; 

}}

