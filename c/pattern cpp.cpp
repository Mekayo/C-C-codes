#include<iostream>
using namespace std;
int main(){
 int  x,y;
 cout<<"Enter number of rows:";
 cin>>x;
 cout<<"Enter number of cloumns:";
 cin>>y;
 for(int i=1;i<=x;i++){
 	for(int j=1;j<=i;j++)
 {
	 	cout<<"*";
 }
 cout<<endl;}
  return 0;
}
   
