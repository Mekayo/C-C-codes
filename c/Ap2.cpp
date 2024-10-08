#include<stdio.h>
int main(){
	int n;
	int a=4;
	printf("Enter a Number: ");
	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
	{
		printf("%d ",a);
   a=a+3;
	}	
return 0;	
}
