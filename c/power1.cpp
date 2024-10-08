#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a number ");
	scanf("%d",&a);
	printf("Enter a  power");
	scanf("%d",&b);
int pow=1;
for(int i=1;i<=b;i++)
{
	pow=pow*a;
	}
	printf("The power of %d^%d is :%d",a,b,pow);	
	return 0;
}
