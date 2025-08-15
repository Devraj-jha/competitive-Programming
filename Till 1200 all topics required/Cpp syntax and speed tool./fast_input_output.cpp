#include <iostream>
using namespace std;

int main(){
             
    //when you write cp soloution speed matters.
    //input out put algo becomes slow.
    //to fix we use
    ios::sync_with_stdio(false); //desynchronizes cin/out
    cin.tie(NULL); //unties cin from cout.

    // Desyncing means C++ I/O (cin/cout) won’t wait for C I/O to catch up.

    // Untying cin from cout means cout won’t flush every time you use cin.

    


  return 0;
}

//by default cin and cout are synchronized with C’s scanf and printf for compatibility.

// This makes them slower because every I/O operation waits to keep them in sync.