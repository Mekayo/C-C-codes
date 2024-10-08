#include<iostream>
using namespace std;
int main(){
int arr[7]={1,3,3,4,2,1,2};
for(int i=0;i<7;i++){
    bool flag=false;
for(int j=i+1;j<7;j++){
    if(arr[i]==arr[j]){
        flag=true;
    }
}
if(flag==false)
    cout<<arr[i]<<" is unique value "<<endl;
    break;
}

    return 0;
}