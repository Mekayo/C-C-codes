#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
    cout<<" "<<arr[i];
}cout<<endl;
return;
}
void swapAlt(int arr[],int size)
{for(int i=0;i<size;i+=2)
{
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    
    }
}
return;
}
int main(){
int n;
cout<<"Enter the size of an array:";
cin>>n;
int arr[n];
cout<<"Enter the elements of array:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
swapAlt(arr,n);
printarr(arr,n);

    return 0;
}