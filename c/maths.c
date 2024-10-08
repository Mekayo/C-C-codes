#include<stdio.h>
#include<conio.h>
int mian()
{
	int marks;
	
	printf("Enter marks (0-100)");
   	scanf("%d",&marks);	
	
	
	if(marks>30){
		printf("student is pass");
	}
	else{printf("invalid");
	}
	return 0;	
}
