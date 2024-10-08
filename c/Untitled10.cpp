#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"Enter a integer:"<<endl;
	cin>>n;
	a=n;//intialising no of rows 
for(int i=1;i<=n;i++){
 	for(int j=1;j<=n-i;j++){	
 	cout<<" ";
	 }
 	for(int k=1;k<=2*a-1;k++){
	 if( i==1||k==i-1||k==n-1||){
	 	
	 	cout<<"*";
	 } 
	 else{
	 	cout<<" ";
	 }			
}a--;//for dercrement of a cause after each row is reduces to * in next row 
  cout<<endl;

}
  	return 0;
}
