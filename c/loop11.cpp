#include<stdio.h>// home work
int main(){
	int n;
	printf("Enter a number :");
scanf("%d",&n);
int product=1;
for (int i=1;i<=n;i++){
	product=product*i;
	printf("Fcatorial of %d is this :%d\n",i,product);
}
return 0;	
}
