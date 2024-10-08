#include<iostream>
using namespace std;
void dec(int n);
int main(){

int num;
cout<<"Enter nth number: ";   
cin>>num;
dec(num);
   return 0;
}
void dec(int n)
{
if(n==0)
   return ;
cout<< n <<endl;
dec(n-1);
cout<< n <<endl;    
return ;
}