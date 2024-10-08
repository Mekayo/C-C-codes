#include<iostream>
#include<vector>
using namespace std;
 int main(){
    
vector<int>a1={1,12,45,35,8,7};


a1.insert(a1.begin()+4,10);
 a1.pop_back();   
for(int i=0;i<a1.size();i++){

cout<<" "<<a1[i];
}


 return 0;
}