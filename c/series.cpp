#include<stdio.h>
#include<math.h>
int main(){
int n,m,sum=0;
printf("Enter a power 'n' : ");
scanf("%d ",&n);
printf("Enter a last no of the series: ");
scanf("%d ",&m);	
for(int i=0;i<=m;i++){
sum=sum+pow(i,m);

}
printf("Enter the sum of all number in series: %d",sum);

	return 0;
	
	
	
	
	
}
