#include<stdio.h>
int main(){
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i+2;j++){
		if(i!=1){
			printf("*");
		}
		else(" ");
	}
	printf("\n");
}
return 0;
	
}
