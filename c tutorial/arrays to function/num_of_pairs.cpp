#include<iostream>
using namespace std;
int main(){ 
int x,arr[8]={1,2,3,4,5,6,7,8};
cout<<"Enter a number to compare:";
cin>>x;
int count=0;
for(int i=0;i<8;i++){
for(int j=i;j<8;j++){
    if(arr[i]+arr[j]==x)
count++;
    
}
}
cout<<"Number of pairs:"<<count;
    return 0;
}   