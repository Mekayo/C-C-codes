#include<stdio.h>
int fact(int n);
int main(){
	
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Factorial of %d! is =%d",n,fact(n));
	return 0;
}
int fact(int n){
	
	
	if(n==1){
		return 1;	
	}
else 
{
	return n*fact(n-1);
}
}
