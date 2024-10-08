#include<stdio.h>
int main(){
	int num;
	 printf("Enter any no");
	scanf("%d",&num);
	 int count=0;
	while(num!=0){
		num=num/10;
	count++;
	
	}
	printf("digits in this number is: %d",count);
	return 0;
}
