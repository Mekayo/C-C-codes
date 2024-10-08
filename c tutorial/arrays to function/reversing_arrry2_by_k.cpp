#include<iostream>
using namespace std;
void revarr(int arr[],int si,int ei){
for(int i=si,j=ei;i<j;i++,j--){//i=3,j=6
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
return;
}

int main(){
int arr[7]={1,2,3,4,5,6,7}; 
revarr(arr,3,6);
for(int i=0;i<7;i++){
    cout<<" "<<arr[i];
}
return 0;
}