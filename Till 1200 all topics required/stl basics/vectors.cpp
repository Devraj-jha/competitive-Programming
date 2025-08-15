#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
             
ios::sync_with_stdio(false);
cin.tie(NULL);

//vectors 
//dyanamic arrays in stl
//size can grow and shrink. aurotmatically this is the meaning of dyanamic
//worse than traditioanl array

vector <int> v;

// this is how we declare a vector
vector <string> s;

vector <int> e(5);

vector <int> a(4,10);



// | Operation           | Usage Example                  | Time Complexity |
// | ------------------- | ------------------------------ | --------------- |
// | Add element at end  | `v.push_back(x);`              | O(1) amortized  |
// | Remove last element | `v.pop_back();`                | O(1)            |
// | Access element      | `v[i]`, `v.at(i)`              | O(1)            |
// | Get size            | `v.size()`                     | O(1)            |
// | Clear all elements  | `v.clear()`                    | O(n)            |
// | Insert element      | `v.insert(v.begin()+pos, val)` | O(n)            |
// | Erase element       | `v.erase(v.begin()+pos)`       | O(n)            |
// | Erase range         | `v.erase(v.begin(), v.end())`  | O(n)            |
// | Resize              | `v.resize(new_size, val)`      | O(n) if grows   |


//sorting 

// sort(v.begin(), v.end());                 // ascending
// sort(v.rbegin(), v.rend());               // descending




  return 0;
}

