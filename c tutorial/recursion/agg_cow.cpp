#include<bits/stdc++.h>
using namespace std;

int aggressiveCows(vector<int>& stalls,int n, int k)
{
 sort(stalls.begin(),stalls.end());
 int s=1;
int e=stalls[n-1]-stalls[0];
 
 int ans=-1;
 
 while(s<=e)
{
   int mid=s+(e-s)/2; 
    int count=1,pos=stalls[0];
     for(int i=1;i<n-1;i++){
        if(pos+mid<=stalls[i]){
            count++;
            pos=stalls[i];
        }
     }
    if(count<k){
        e=mid-1;
    }
        else{
            ans=mid;
            s=mid+1;
        }
    return ans;
}

}
int main(){

  vector<int> stalls = {1,2,4,8,9};
    int k = 2;  // Number of cows
    int n=stalls.size();
    cout << "Largest minimum distance: " << aggressiveCows(stalls,n, k) << endl;


    return 0;
}