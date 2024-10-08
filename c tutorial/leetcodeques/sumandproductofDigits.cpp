#include<iostream>
using namespace std;
int main(){

int num,rem,sum=0,pro=1;
cout<<"Enter a number:"<<endl;
cin>>num;
while(num!=0){
rem=num%10;
sum=sum+rem;
pro=pro*rem;
num=num/10;

}
cout<<"product is :"<<pro<<endl;
cout<<"sum of digits is "<<sum<<endl;
int sub=pro-sum;
cout<<"sub of prod and sum is :"<<sub<<endl;
    return 0;
}