// how many times someting appears.
// to find duplicates.
//
#include <iostream>

using namespace std; 
int main(){
    int arr[] = {1,2,1,2,3,1,2,3,3,1};
    int freq[2] = {0};

    for(int i = 0; i < 10 ; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i < 2; i ++){
        if(freq[i] > 0){
            cout << i << "-->" << freq[i] << endl;
        }
    }
}