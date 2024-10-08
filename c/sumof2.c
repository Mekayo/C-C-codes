#include<stdio.h>
int sum(int a,int b);
int main(){
int a,b;
printf("Enter a value of a and b:");
scanf("%d%d",&a,&b);
int add=sum(a,b);
printf("sum of a&b %d:",add);
    return 0;
}
int sum(int a,int b){
return a+b;
}