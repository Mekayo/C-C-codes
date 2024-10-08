#include <stdio.h>

int main() {
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Compare the numbers to find the greatest one
    if (num1 > num2 && num1 > num3) {
        printf("%d is the greatest number.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d is the greatest number.\n", num2);
    } else {
        printf("%d is the greatest number.\n", num3);
    }

    return 0;
}
