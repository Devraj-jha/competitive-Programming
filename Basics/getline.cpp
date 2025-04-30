#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); //cin creates a buffer which is stoted in getline

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Hello " << fullName << ", age " << age << endl;
    return 0;
}
