#include<stdio.h>//1-2+3-4+5-6+7-8......n 2method
int main(){
	int n;
	 printf("Enter any no");
	scanf("%d",&n);
	int sum=0;
	 
	  if(n%2!=0) {sum = - n/2;
	  }
	  else {
	  sum = -n/2+n;}
	 
	 
	printf("the sum is:%d",sum); 
	
	return 0;
}
