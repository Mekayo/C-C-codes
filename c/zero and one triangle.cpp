#include<stdio.h>
int main(){
	int n;
	
printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
//		int a;
//		if(i%2==0) a=1;
//		else a=0;
		for(int j=1;j<=i;j++){
if((i+j)%2==0) printf("1");
else printf("0");
//	if(a==00)
//		a=1;
//		else a=0;
		
		
		}
	printf("\n");
		
	}
	
	
	
	return 0;
}
