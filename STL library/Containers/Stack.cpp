#include <iostream>
using namespace std;

int main(){
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4); //{4,3,2,1};

cout<<st.top();

st.top(); //4;



  
  return 0;
}