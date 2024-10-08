#include<stdio.h>
int main(){
 int n,m;
 printf("Enter the number of rows: ");	
	scanf("%d",&n);
printf("Enter the number of coln : ");
	scanf("%d",&m);
	for(int i=1;i<=n;i++)
	{int a=1;
		for(int j=1;j<=i;j++)
		{
		printf("%d ",j);
	a=a+2;
	}
	printf("\n");
	}
	
	return 0;
}
