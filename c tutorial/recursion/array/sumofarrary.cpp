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
int sum =0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
} 
cout<<endl<<"sum of elements of arr is:"<<sum;

    return 0;
}