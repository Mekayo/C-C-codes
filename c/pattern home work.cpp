#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number :");	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){  
		char ch=(char)j+64;
	if(i%2!=0)
			printf("%d",j);
else
	printf("%c",ch);
		
		}
	
	printf("\n");
	}
	
	return 0;
}
