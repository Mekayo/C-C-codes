#include<iostream>
using namespace std;
int partition(int *arr,int l,int h)
{
 int pivot=arr[l];
int i=l,j=h;//low =l, high=h
while(i<j){
    do{
        i++;
    }while (arr[i]<=pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    if(i<j){
        swap(arr[i],arr[j]);
    }
   
}
 swap(arr[l],arr[j]);
 return j;
}

void quicksort(int *arr,int st,int ed){
    if(st<ed){
        int j=partition(arr,st,ed);
        quicksort(arr,st,j);
        quicksort(arr,j+1,ed);
    }
}

int main(){
    int arr[7]={10, 80, 30, 90, 40, 50, 70};
    int n=7;
    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}