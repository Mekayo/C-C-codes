#include<stdio.h>
int main (){
	// 100 97 94 ....n
	int n;
		printf("Enter a number ");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
{if(n%i==0) printf("the number is composite");
	else printf("the number is prime ");break;
	}	
	
	
	
	return 0;
}
