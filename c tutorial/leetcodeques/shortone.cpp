#include<iostream>
using namespace std;
void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }cout<<endl;
    }


void sortOne(int arr[],int size){
int i=0;
int j=size-1 ;
while(i<j){
    if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
else{
            if(arr[i]==0) i++;
            if(arr[j]==1)j--;
        }
    } 
}

int main(){

 int arr[8]={1,0,1,0,1,1,0,0};

sortOne(arr,8);
printArr(arr,8);

    return 0;
}