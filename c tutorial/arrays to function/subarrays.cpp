#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
vector<int > minsub(vector<int> &arr,int n,int k){
    int sum=0;
    int minsum=-1;
    int start=0;

     for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    minsum=sum;
    for(int j=k;j<n;j++){
        sum+=arr[j]-arr[j-k];
        minsum=min(minsum,sum);
    start = j-k+1;
    
    }
    vector<int> ans(arr.begin()+start,arr.begin()+start+k);
    
    return ans;

}

int main(){
    vector<int> arr={2,1,5,3,4,7,9,6,0,8,10};
int n=arr.size();
int k;
cout<<"value of k:";
cin>>k;
if(k>n){
    return 1;
}
 
vector<int >ans= minsub(arr,n,k);
cout<<"sub array with  minimum sum:"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
     return 0; 
}