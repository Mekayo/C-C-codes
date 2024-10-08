#include<stdio.h>

 int main(){
     	int a;
    	int b=0;
int sum=0;
printf("ENTER a number: ");
scanf("%d",&a);
for ( int i=1; i<=a ;i++){
	  
	if(i%2!=0){	
    sum = sum + i;
	b++;
		
	} 	 
	}
		     		
	printf("the number of odd number %d is: %d\n",a,b);
printf("sum of all odd no:%d",sum);
return 0;
		 
 }
