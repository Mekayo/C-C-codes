#include<stdio.h>//1-2+3-4+5-6+7-8......n 1method
int main(){
	int n;
	 printf("Enter any no");
	scanf("%d",&n);
	int sum=0;
	 for(int i=1;i<=n;i++){
	  if(i%2!=0) {sum = sum +i;
	  }
	  else {
	  sum =sum-i;}
	 
	 }
	printf("the sum is:%d",sum); 
	
	return 0;
}
