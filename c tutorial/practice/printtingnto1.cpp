#include<iostream>
using namespace std;
void count(int x){
if(x<=30){
    return;
}
cout<<" "<<x<<endl;
 count(x+1);
     return ;
}
int main(){

int n;
cout<<"Enter nth number: "<<endl;   
cin>>n;
count(n);
    return 0;
}
