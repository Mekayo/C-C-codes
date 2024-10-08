#include<stdio.h>
void fun(int n);
int main(){
	
	int n;
	
	fun(4);
	return 0;
}
void fun(int n){
	
	if(n==0)return;
	printf("%d\n ",n);
	fun(n-1);
	
}
