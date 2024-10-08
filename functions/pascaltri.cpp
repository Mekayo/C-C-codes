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
int n;
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
for(int j=0;j<=i;j++){

int icj=combination(i,j);
cout<<" "<<icj;
}
cout<<endl;
}
return 0;
}