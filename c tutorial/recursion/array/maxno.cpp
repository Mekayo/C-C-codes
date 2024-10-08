#include<iostream> 
#include<climits>
using namespace std;
int main(){
int n,arr[n];
cout<<"Enter the size of array:"<<endl;
cin>>n;

for (int i = 0; i <n; i++)

{
   cout<<"Enter elements"<<i<<":"<<endl;
    cin>>arr[i];
}   
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i]; 
    }
} 
cout<<" max of elements of arr is:"<<max;

    return 0;
}