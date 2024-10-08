#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
// int arr[7]={1,5,3,4,8,6,9};
int a;
cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the elements of array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
cout<<"enter the number :";
cin>>a;

for(int i=0;i<n;i++){
if(arr[i]>a) 
count=count+1;

 }
cout<<count;
    return 0;
}