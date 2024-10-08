#include<iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }return fact;}
    int combination(int n,int r){
        return fact(n)/(fact(r)*fact(n-r));
    }
int main(){
int n,r;
cin>>n>>r;
int ncr=combination(n,r);
cout<<"nCr:"<<ncr;
return 0;
}