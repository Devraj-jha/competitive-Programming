#include <iostream>
using namespace std;

int main(){

int n,k;
cin>>n;
cin>>k;
int sn = 0;

int score[50];

for(int i = 0; i< n; i++){
  cin>>score[i];
  
}

for(int i = 0; i < n ; i++){
  if(score[i]>=score[k] && score[k]>0){
    sn++;
  }
}
cout<<sn;
}