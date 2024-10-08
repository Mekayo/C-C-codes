#include<stdio.h>
void fab(int n);
int main(){
	int n;
	printf("Enter the number of element:");
	scanf("%d",&n);
	printf("fibonacci seires is :");
	printf("%d %d",0,1);
	fab(n-2);
	
	return 0;
}
void fab(int n){
static int n1=0,n2=1,n3;	
if(n>0)
{
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d ",n3);
fab(n-1);	
	}	
}
