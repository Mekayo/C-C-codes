/*Finding an unique element in an array */
#include<iostream>
using namespace std;
void uniqueEl(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];/**using xor ^ */
    }
    cout<<ans<<" is unique element";

    return ;
}

int main(){
int n;
cout<<"size:";
cin>>n;
int arr[n];
cout<<"Enter the elements:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
uniqueEl(arr,n);
return 0;
}