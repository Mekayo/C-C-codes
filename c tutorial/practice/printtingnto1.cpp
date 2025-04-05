#include<iostream>
using namespace std;
void count(int x){
if(x!=0){
    cout<<x<<endl;
    count(x-1);
}
return ;
}
int main(){
int n;
cout<<"Enter nth number: ";   
cin>>n;

count(n);

return 0;
}
