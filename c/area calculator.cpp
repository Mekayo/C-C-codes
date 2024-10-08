#include<stdio.h>
float squareArea(float side);
float rectArea(float a,float b);
float circleArea(float rad);
int main(){
	
	float s,r,c,a,b,side,rad;
	printf("type r for area of rect,type s for area of square,type c for area of circle:");
	char ch;
	scanf("%c",&ch);
  if (ch=='r'){
  	printf("enter the value of a&b:");
  	scanf("%f%f",&a,&b);
  	float re=rectArea(a,b);
 printf("\narea of rect=%f",re);
  }
 else if (ch=='s'){
   	printf("enter the value of side: ");
  	scanf("%f",&side);
  	float sq=squareArea(side);
printf("\narea of square=%f",sq);	
 }
 else if(ch=='c'){
	   printf("enter the value of radius:");
  	scanf("%f",&rad);
  	float ci=circleArea(rad);
printf("\narea of circle=%f",c);
} else
 printf("invalid\n");

 	return 0;
}
float squareArea(float side){
return side*side;
}
 float rectArea(float a, float b) {
 	return a*b;
 }
float circleArea(float rad){
	return 3.14 * rad * rad;
}

