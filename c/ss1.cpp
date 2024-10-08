#include<stdio.h>
#include<math.h>
int main (){
	int n,m;
	printf("Enter a te value of n and m :");
	scanf("%d%d",&n,&m);
	int sum=0;
	
	for(int i=1;i<=m;i++)
	{
		sum=sum+pow(i,n);
	}
	
	printf("The sum of the series is :%d",sum);
	return 0;
}
