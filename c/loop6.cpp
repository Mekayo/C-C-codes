#include<stdio.h>//sum of even digits

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;
    int lastdgt = 0;

    while (num!=0) {
        lastdgt = num %10;
        if (lastdgt % 2 == 0) {
            sum = sum + lastdgt;
        }
        num = num / 10;
    }
    
 printf("%d", sum);
    return 0;
}

