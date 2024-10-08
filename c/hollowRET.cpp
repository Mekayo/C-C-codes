#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the value of axb for size of rectangle:"<<endl;
	cin>>n>>m;
	
 for(int i=1;i<=m;i++){
  	  for(int j=1;j<=n;j++){
  	  	
			if(j==1||j==n||i==1||i==m){
  	  		
				cout<<"*";
			}
  	  	
		else{cout<<" ";
			}
		}
	   cout<<endl;
}
 
 	return 0;
}

