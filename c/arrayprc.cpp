#include<stdio.h>
int main(){
	//sum of number and avg
	
	int a[12],b;
	
float sum=0,avg;
	printf("Enter a number from(1 to 12): ");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{printf("enter the value\n");
		scanf("%d",&a[b]);
		sum=sum+a[b];// summ
	}
	printf("the sum of array is :%f",sum);
	avg=sum/b;//avg
	printf("\n avrage of the array is :%f",avg);
	
	
	return 0;
}
