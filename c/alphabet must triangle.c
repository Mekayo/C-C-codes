#include<stdio.h>
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int d=0;
	for(int i=1;i<=n;i++){
		int p=1;
		for(int j=1;j<=n-i;j++){
			printf(" ");
	} 
			for(int k=1;k<=i;k++)
	{
d=p+64;
char ch=(char)d;
printf("%c",ch);
	}
		printf("\n");
	}
	
	return 0;
}
