#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {   
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int>& stalls, int k)
{
 sort(stalls.begin(),stalls.end());

int s=1;
 int maxi=-1;
 for(int i=0;i<stalls.size();i++){
     maxi=max(maxi,stalls[i]);
 }   
int e=maxi-1;
int ans=-1;

 while(s<=e){
    int mid=s+(e-s)/2;
      if(isPossible(stalls,k,mid)){
          ans=mid;
          s=mid+1;
        }
         else {
          e = mid - 1;
        }
 }
 return ans;
}
int main(){

  vector<int> stalls = {1,2,6,8,9,10};
    int k = 4;  // Number of cows
    cout << "Largest minimum distance: " << aggressiveCows(stalls, k) << endl;


    return 0;
}