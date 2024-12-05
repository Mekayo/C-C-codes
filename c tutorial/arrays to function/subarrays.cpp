// sliding windows technique
#include<iostream>
#include<vector> 
using namespace std;
// subarray of min sum 
vector<int > minsub(vector<int> &arr,int n,int k){
    int sum=0;
    int minsum=INT32_MAX;
    int start=0;

     for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    minsum=sum;
    for(int j=k;j<n;j++){
        sum+=arr[j]-arr[j-k];
        if(sum<minsum){
        minsum=sum;    
        start = j-k+1;
        }
    }
    vector<int> ans(arr.begin()+start,arr.begin()+start+k);
    
    return ans;

}
//to find sub array with max sum 
vector<int > maxsub(vector<int> &arr,int n,int k){
    int sum=0;
    int maxsum=-1;
    int start=0;

     for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    maxsum=sum;
    for(int j=k;j<n;j++){
        sum+=arr[j]-arr[j-k];
    if(sum>maxsum){        
    maxsum=sum;
    start = j-k+1;
         }
    }
    vector<int> ans(arr.begin()+start,arr.begin()+start+k);
    
    return ans;

}

int main(){
    vector<int> arr1={2,1,5,3,4,7,9,6,0,8,10};
int n=arr1.size();
int k;
cout<<"value of k:";
cin>>k;
 
vector<int >ans= minsub(arr1,n,k);
cout<<"sub array with  minimum sum:"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

cout<<endl<<endl;


 vector<int> arr2={2,1,5,3,4,7,9,6,0,8,10};
int n2=arr2.size();

vector<int >maxans= maxsub(arr2,n2,k);
cout<<"sub array with  maximum sum of second array:"<<endl;
for(int i=0;i<maxans.size();i++){
    cout<<maxans[i]<<" ";
}
     return 0; 
}