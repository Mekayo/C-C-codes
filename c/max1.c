#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
       if(a>c)     
            {printf("%d is maximum ",a);
            }
            else{
                 printf("%d is maximum ",c);
                 }
                 }
    else{
        if(b>c){
               printf("%d is maximum",b); 
                }else{
                      printf("%d is maximum",c);
                      } 
         }
    getch();
    return 0;
    }
