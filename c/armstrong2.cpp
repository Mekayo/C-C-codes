#include<stdio.h>
#include<math.h>
int main() {	
int 
    printf("Armstrong numbers between 1 and 500:\n");

    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
