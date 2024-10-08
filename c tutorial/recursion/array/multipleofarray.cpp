#include<iostream>
using namespace std;
int main(){
int n,arr[5];
cout<<"Enter the size of array:"<<endl;
cin>>n;

for (int i = 0; i <n; i++)
{
   cout<<"Enter elements"<<i<<":"<<endl;
    cin>>arr[i];
}
int mul=1;
for(int i=0;i<n;i++){
    mul=mul*arr[i];
} 
cout<<endl<<"multiple of elements of arr is:"<<mul;

    return 0;
}