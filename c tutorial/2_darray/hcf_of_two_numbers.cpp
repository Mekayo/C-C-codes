#include<iostream>
using namespace std;

void hcf(int num1,int num2){
 

for(int i=2;i<=num1&&i<=num2;i++)
{
    if(num1%i==0 && num2%i==0){
        cout<<i<<endl;
    }
 
}
  
   }
 

int main(){
int num1,num2;
cout<<"Enter the two number :";
cin>>num1>>num2;
hcf(num1,num2);
 
    return 0;
}