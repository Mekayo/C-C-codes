#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	int d =0;
	for(int i=1;i<=n;i++){
		//dint a=2*i-1;
		int p=1;
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			d=p+64;
			char ch=(char)d;
			printf("%c",ch);
		p++;	
		}
		
		printf("\n ");
	}
		
		return 0;
	}
	

