// stack is a last in first out
// ds 
//undo button.

// wahtever

// push operation -> insert an element
//pop remove top elemetn
//top => see top elemetn
// empty -> check if stack is empty


#include <stack>
#include <iostream>

using namespace std; 

int main(){
    stack <int> st; 

    st.push(10);
    st.push(20);
    st.push(40);

    cout << st.top();
    st.pop();

    if(st.empty())
{
    cout<<"Empty";
}
cout<<st.size();
}