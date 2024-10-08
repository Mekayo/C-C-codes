#include<iostream>
using namespace std;
int Fnocc(int arr[],int size,int target){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
if(arr[mid]==target){
    ans=mid;
    e=mid-1;
}
 
else if( target>arr[mid]){
    s=mid+1;
}
else if(target < arr[mid]){
    e=mid-1;

}
mid=s+(e-s)/2;
}

return ans;
}
int Lnocc(int arr[],int size,int target){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
if(arr[mid]==target){
    ans=mid;
    s=mid+1;
}
 
else if( target>arr[mid]){
    s=mid+1;
}
else if(target < arr[mid]){
    e=mid-1;

}
mid=s+(e-s)/2;
}

return ans;
}
int main(){
int arr[10]={1,2,3,3,3,3,3,3,4,5};//array must be sorted for binary search
 
 
cout<<"first occurance of 3 is "<<Fnocc(arr,10,3)<<endl;

cout<<"last occurance of 3 is "<<Lnocc(arr,10,3)<<endl;
cout<<"Total number of ouccrence is "<<(Lnocc(arr,10,3)-Fnocc(arr,10,3))+1<<endl;
return 0;
}