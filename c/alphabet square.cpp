#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number :");	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){ // agr inverted nhi chaiye to condition m j=n-i+1 ki jagha i type kr do bs 
		
			char ch=(char)j;
			printf("%c",j+64);
		}
	
	printf("\n");
	}
	
	return 0;
}
