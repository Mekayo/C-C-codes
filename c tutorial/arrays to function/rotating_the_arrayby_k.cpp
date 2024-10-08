#include<iostream>
using namespace std;
void revarr(int arr[],int si,int ei){
for(int i=si,j=ei;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
return;
}

int main(){

int k,arr[7]={1,2,3,4,5,6,7};

cout<<"Enter no of rotation: ";

cin>>k;

k=k%7; 

revarr(arr,0,6);//reverse the array

revarr(arr,0,k-1);//revesing the index- 7 6 5 to 5 6 7

revarr(arr,k,6);//reversing the remain indices 4 3 2 1 to 1 2 3 4 
for(int i=0;i<7;i++){
    cout<<" "<<arr[i]; 
}
return 0;
}