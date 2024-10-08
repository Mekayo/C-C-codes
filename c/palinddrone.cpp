#include<stdio.h>
int main(){
	int rem,num,rev=0,org; 
	printf("Enter a number : ");
	scanf("%d",&num);
	org=num;
	do{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;	
	}
	while(num>0);
	if(num=org)
	{
	printf("the no %d is palindrone",num);
	}
	else
	printf("the no %d is not a palindrone",num);
	
	return 0;
}
