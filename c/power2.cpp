#include<stdio.h>
#include<math.h>
int main()
{ int num;
printf("Enter the number: ");
	 scanf("%d",&num);
	 int org;
	 int ld;
	 int sum=0;
	 int count=0;
	 while(num!=0){
	 	ld=num%10;
	 	count++;
	 	num=num/10;

	 }
	org=num;
	
	while(num!=0){
		
		ld=num%10;
		sum=pow(ld,count);
		num=num/10;
	}
if(sum==org){
printf("%d is a armstrong number",org);}
else printf("%d is not a armstrong number",org);
	return 0;
}
