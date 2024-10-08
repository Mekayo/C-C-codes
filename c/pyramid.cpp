#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int a=2*i-1;
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=a;k++){
			printf("*"); 
		}
		printf("\n");
	}
	return 0;
}
