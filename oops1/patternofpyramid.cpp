#include<iostream>
using namespace std;
int main(){
int a,n;
cout<<"Enter thr value: ";
cin>>a;
n=a;
for(int i=1;i<=a;i++){

    for(int j=1;j<=i;j++){
        cout<<" ";
    }for(int k=1;k<=2*n-1;k++){
        cout<<"*";
    }n--;
    cout<<endl;
}

 return 0;
}