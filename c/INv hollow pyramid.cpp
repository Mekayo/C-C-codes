#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a integer:"<<endl;
	cin>>n;
	//intialising no of rows 
for(int i=1;i<=n;i++){
 	for(int j=1;j<=n-i;j++){	
 	cout<<" ";
	 }
 	for(int k=1;k<=2*i-1;k++){
	 if(i==n||k==1||k==2*i-1){
	 	cout<<"*";
	 }else{cout<<" ";
	 }
	 }			
//for dercrement of a cause after each row is reduces to * in next row 
  cout<<endl;
}

  	return 0;
}
