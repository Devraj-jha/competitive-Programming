#include <iostream>
#include <vector> 
 
using namespace std; 

int main()
{
vector <int> v; 


v.push_back(10);
v.push_back(20);

v.pop_back();

v.size();


cout << v.capacity();

}


//vector is a dynamic array that stores elements in contiguous ( continuous )
//memory Like normal array, 

//grows automatically 
//push/remove elemnt in vector
// begin -> first element
// end -> one past the last element
// end_cap -> end of allocated memory ( capacity)

// [10][20][30][_][_] 
//  ^          ^     ^
// begin      end   end_cap

// size = number of actual elements (3)

// capacity = maximum elements you can store before resizing (5)

// contiguous memory => means memory is like a street with house numbers
