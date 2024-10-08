#include<iostream>
using namespace std;
void dec(int n);
int main(){

int num;
cout<<"Enter nth number: "<<endl;   
cin>>num;
dec(num);
   return 0;
}
void dec(int n)
{
if(n==0)
   return ;
dec(n-1);
cout<< n <<endl;    
return ;
}