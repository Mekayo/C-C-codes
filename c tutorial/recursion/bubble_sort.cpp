#include<iostream>
using namespace std;

void bubblesort(int *arr,int n){

if(n==0||n==1){
    return;
}
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                swap(arr[i],arr[i+1]);
        }
}
bubblesort(arr,n-1);
}


int main(){

    int arr[8]={6,4,9,3,2,1,10,5};


    bubblesort(arr,8);

    cout<<"sortted array-->"<<endl;
for(int i=0;i<8;i++){

    cout<<arr[i]<<" ";
}
    return 0;
}