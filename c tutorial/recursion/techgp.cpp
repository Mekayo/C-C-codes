#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the gp: "<<endl;
cin>>n;
int start;
cout<<"enter the starting element of the gp: "<<endl;
cin>>start;
int ratio;
cout<<"enter the ratio of the gp: "<<endl;
cin>>ratio;
int t=start;
int sum=0;
cout<<"the gp series is given by: "<<endl;
for(int i=0;i<n;i++){
cout<<t<<" ";
sum+=t;
t*=ratio;
}
cout<<"the sum of gp is : "<<sum<<endl;
return 0;
}