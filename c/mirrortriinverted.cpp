#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a integer:"<<endl;
	cin>>n;
	
 for(int i=n;i>=1;i--){
 	for(int j=1;j<i;j++){
 	 if(i==j||j==n){
	  cout<<"*";
	}else{
		cout<<" ";
	}}
 cout<<endl;
}
 
 	return 0;
}

