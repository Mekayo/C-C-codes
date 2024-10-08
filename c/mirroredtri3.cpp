#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter a integer:"<<endl;
	cin>>n;
	m=n;
 for(int i=1;i<=n;i++){
 	for(int j=1;j<=i-1;j++){
 		
 	cout<<"#";
	 }
 	for(int k=1;k<=2*m-1;k++){
	 
 			cout<<" *";
}m--;
  cout<<endl;

}
  	return 0;
}

