#include<stdio.h>
int main(){
	int num,count=1,rem,sum;
for(num=1;num<=500;num++){
	num=count;
	sum=0;
	while(num)
{rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
	
}
if(count == sum)
	printf("%d is an armstrong number\n", count); 

	  }	  
	return 0;
}
