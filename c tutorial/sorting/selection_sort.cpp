#include<iostream>
#include<vector>
using namespace std; 
void selection_sort(vector<int> &arr,int n){
for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;

        }
    }
    swap(arr[minindex],arr[i]);
}

}
int main(){

 int n;
cout<<"Enter the value of n:";
cin>>n;
vector<int>arr(n);
 cout << "Enter " << n << " number of elements: " << endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selection_sort(arr, n);
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
    return 0;
}