#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	 	 for(int i=2;i<=n;i++){
		  
	if(n%i==0){
printf("no is composite ");
}else{
printf("number is  prime");break;
}
}
return 0;
}
