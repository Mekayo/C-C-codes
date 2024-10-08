#include<stdio.h>
int fact(int n);

int main(){
	
	printf("factorial is=%d",fact(4));
	
	return 0;
}

int fact(int n){
	
	int factNm=fact(n-1);
	int factN= fact(n-1)*n;
	return factN;
	
	
}

