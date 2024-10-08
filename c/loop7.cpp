#include<stdio.h>
int main(){
	int num;
	 printf("Enter any no");
	scanf("%d",&num);
	 int sum=0;
	while(num!=0){
    sum=sum*10+num%10;
	num=num/10;
 	}
	printf("%d",sum);
	return 0;
}
