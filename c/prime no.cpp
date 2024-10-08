#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	for(int i=1;i<a;i++){
		
		if(a%2!=0){
			cout<<"number is prime";break;
		}
		else{
			cout<<"number is composite";break;
		}
	}
	
	
	return 0;
}
