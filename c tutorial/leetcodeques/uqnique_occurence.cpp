#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool unique(vector<int>arr,int n)
{
 map<int ,int >mp;
 for(auto i:arr){
    mp[i]++;
     }
vector<int>v;
for(auto j:mp){
v.push_back(j.second);
}
for(int i=0;i<v.size();i++){

    if (v[i]==v[i+1]){
return false;
    }    
    return true;
}



}

int main(){

    vector<int> arr={2,1,4,5,4,4,8,0};
    int n=8;
bool result = unique(arr,n);
if(result){
    cout<<"frequencies of elements is unique "<<endl;
}
else{
        cout<<"frequencies of elements is not  unique "<<endl;

}
}