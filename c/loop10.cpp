#include<stdio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",n);
int s=1;
for(int i=1;i<=n;i++){
	s=s*i;
}
 printf("Factorial : %d",s);
 
	return 0;
}
