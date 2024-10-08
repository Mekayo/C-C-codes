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
int min = INT_MAX;
// for(int i=0;i<n;i++){
//     if(min>arr[i]){
//         min=arr[i]; 
//     }
// } 
cout<<" minimum of elements of arr is:"<<min;

    return 0;
}