#include <iostream>
#include <stack>
using namespace std;

// last plate puts on put top is the first on you remove..

//last in first out..

int main(){

  stack<int> st;
  st.push(10);
  st.push(20);

  st.push(30); //stack: [10,20,30]
  


  //30
  //20
  //10


  cout<<"Top:  "<< st.top() << "\n";//30


  st.pop(); //remvoes 30


  


  return 0;

  //why use this
  //undo features in text editors...
  // press undo pops the latest changes

  //stack => because pop latest action

  //

}