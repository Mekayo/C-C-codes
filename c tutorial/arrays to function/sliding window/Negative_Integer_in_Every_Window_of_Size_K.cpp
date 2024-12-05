// sliding windows technique
#include<iostream>
#include<vector> 
using namespace std;
 
//to find first negative number in the window 
vector<int > maxsub(vector<int> &arr,int n,int k){
 vector<int> arrofNegNUM;
 int low=0;
 int high=0;
 while (high<n){

 if(arr[low]<0){
    arrofNegNUM.push_back(arr[low]);
 }
if(high-low+1<k){
    high++;

}
else if(high-low+1==k){

}



 }

}

int main(){
 
int k;
cout<<"value of k:";

cin>>k; 

 vector<int> arr2={12, -1, -7, 8, -15, 30, 16, 28};
int n2=arr2.size();

 
     return 0; 
}