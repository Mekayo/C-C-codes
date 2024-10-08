#include<stdio.h>
#include<math.h>
int main(){
	int num,org;
	printf("Enter a number: ");
	scanf("%d",&num);
	org=num;
	int sum=0;
	
	while(num!=0){
	sum=sum+pow(num%10,3);
	num=num/10;
	}
	 
    if (sum == org) {
        printf("%d is an Armstrong number.\n", org);
    } else {
        printf("%d is not an Armstrong number.\n", org);
    }
	
	
	return 0;
}
