#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
 if(size==0||size==1)
 {
    return true;
 }
 if(arr[0]>arr[1]){
    return false;   
 }
 else{
    bool ans= issorted(arr+1,size-1);
return ans; }

}

int main(){

    int arr[8]={1,10,12,4,5,6,7,9};
    int n=8;
    bool ans=issorted(arr,n);
    cout<<endl<<"Answer is: "<<ans<<endl<<endl;
    return 0;
}