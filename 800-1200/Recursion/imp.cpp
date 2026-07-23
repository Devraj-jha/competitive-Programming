#include <iostream>
using namespace std;

void countdown(int n) {
   
    if (n == 0) {
        return;
    }

    
    cout << "Going down: " << n << endl;

    countdown(n - 1);


    cout << "Returning from: " << n << endl;
}

int main() {
    countdown(3);

    return 0;
}