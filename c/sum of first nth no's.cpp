#include<iostream>
using namespace std;
int main(){
 int a,sum=0;
 cin>>a;
 for(int i=1;i<=a;i++)
{
	sum=sum+i;
}
cout<<"sum of first nth number:"<<sum  <<endl;
    return 0;
}
