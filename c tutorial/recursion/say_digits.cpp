#include<iostream>
 
using namespace std;
   
void solve(string arr[],int num)
{
if(num==0) {
    return;
}
//upodation 
int digit= num % 10;

num=num/10;



//recursive call
solve(arr,num);

cout<<arr[digit]<<" ";


}

int main()
{
int num;
cout<<"Enter a number:";    
cin>>num;
string arr[10]={"zero","one","two","three","four"
                    ,"five","six","seven",  
                            "eight","nine"};
 cout<<endl;
 solve(arr,num);
cout<<endl;
    return 0;
}