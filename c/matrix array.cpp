#include<stdio.h>

int main(){
	
	int a[3][3],b[3][3],c[3][3]={0,0,0,0,0,0,0,0,0},i,j,k;
	 printf("enter the value of first matrix:");
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		scanf("%d",&a[i][j]);
	 	
		 }
	 }	
	 printf("Enter the value of second matrix:");
		for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		for(k=0;k<3;k++){
			 
	 		c[i][j]=c[i][j]+a[i][k]*b[i][k];
		 }
	 }
}for(i=0;i<3;i++){
printf("\n");	
for(j=0;j<3;j++){
	printf("%d",c[i][j]);

printf("\t");
}
}	
	return 0;
}
