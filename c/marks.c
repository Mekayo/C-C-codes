#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter marks (0-100)");
   	scanf("%d",&marks);	
	
	
	if(marks>30 && marks<=100){
		printf("student is pass");
		}
	
	else if(marks>=0 && marks<=30)
	{
		printf("student is fail");
	}
	else{printf("invalid");
	}
	return 0;	
}
