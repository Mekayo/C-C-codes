#include<stdio.h>
int main(){
	int n,m;
	
	printf("Enter a number of rows: ");
	
	scanf("%d",&n);
    
	 for(int i=1;i<=n;i++){
	
		for(int j=1;j<=n+1-i;j++){
    
	printf("%d ",j);
	
	}printf("\n");
}
	return 0;
}
