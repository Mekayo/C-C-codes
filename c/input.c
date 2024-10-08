#include <stdio.h>

int main() {
     int userInput, countOdd = 0;

     printf("Enter a number: ");
    scanf("%d", &userInput);

     if (userInput <= 0) {
        printf("Please enter a positive number.\n");
        return 1; 
    }

     for (int i = 1; i < userInput; i++) {
        if (i % 2 != 0) {  
            countOdd++;
        }
    }

     printf("The number of odd numbers under %d is: %d\n", userInput, countOdd);
getch();
    return 0;
}
