#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	int gp=1;
 	for(int i=1;i<=n;i++)
	 {
 	printf("%d ",gp);
 	gp*=2;
	 }	
return 0;	
}
