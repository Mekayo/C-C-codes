#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1; 
    int mid ;
while(s<e){
mid = s+(e-s)/2;
    if(arr[mid]>=arr[0]){
         s = mid +1;
    }
    else{
        e=mid;
    }

}
return arr[s];
}

int main(){
    int arr[4]={7,0,2,3};
    cout<<"pivot is "<<getpivot(arr,4);
    return 0;
}