#include<stdio.h>
int main(){
	int num;
	 printf("Enter any no");
	scanf("%d",&num);
	 int sum=0;
	while(num!=0){
    sum=sum+num%10;
	num=num/10;
 	}
	printf("sum : %d",sum);
	return 0;
}
