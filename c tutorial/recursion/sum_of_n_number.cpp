#include<iostream>
using namespace std;
void sum(int n,int s){
 
if(n==0){
return;}
sum(n-1,s+n);
cout<<sum;
return;
}
int main(){

int a;
cout<<"Enter value of nth term:";
cin>>a;
sum(a,0);
    return 0;
}