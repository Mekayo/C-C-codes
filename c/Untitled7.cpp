#include<stdio.h>
int main(){
int n,i;

printf("Enter a number :");
scanf("%d",n);
int product=1;
for(i=1;i<=n;i++){

	product=product*i;
   
   printf("Factorial of= %d",product);

}

	return 0;
}
