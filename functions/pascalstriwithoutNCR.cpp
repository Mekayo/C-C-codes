#include<iostream>

using namespace std;

// int fact(int x)
// {
//     int fact=1;
//     for(int i=1;i<=x;i++){
//         fact=fact*i;
//     }return fact;}
//     int combination(int i,int j){
//         return fact(i)/(fact(j)*fact(i-j));
//     }
int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
int first=1;
for(int j=0;j<=i;j++){
cout<<" "<<first;
first=first*(i-j)/(j+1);  
}
cout<<endl;
}
return 0;
}