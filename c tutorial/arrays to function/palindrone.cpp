#include<iostream>
using namespace std;

void revarr(int arr[],int n){
    
for(int i=0,j=4;i<j;i++,j--)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
  return;
  }
  int palindrome(int arr[],int n)
  {
    for (int i = 0; i<n; i++) {
        if (arr[i] != arr[n-i-1]) {
            return false;
        }
    }
    return true;}
int main(){
int n,arr[n];
cout<<"enter a size"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
revarr(arr,n);
// cout<<"checking palindrone array"<<endl;
//palindrome(arr,n);
   if(palindrome(arr,n)){
    cout<<"is palindrome"<<endl;
   }
else{
  cout<<"not a palindrome"<<endl;
}
    return 0;
 }