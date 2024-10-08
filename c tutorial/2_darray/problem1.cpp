#include<iostream>
using namespace std;
int main(){
int n,arr[n][4];
cout<<"Enter the no of rows:";
cin>>n;
for(int i=0;i<n;i++){
 cout<<"Enter the roll no."<<(i+1)<<":";
 cin>>arr[i][0];
 cout<<"Enter the physics marks"<<(i+1)<<":";
 cin>>arr[i][1];
 cout<<"Enter the  chemistry marks"<<(i+1)<<":";
 cin>>arr[i][2];
  cout<<"Enter the maths marks"<<(i+1)<<":";
 cin>>arr[i][3];
}
for(int i=0;i<n;i++){
    cout<<" "<<arr[i][4];
}
    return 0;
}