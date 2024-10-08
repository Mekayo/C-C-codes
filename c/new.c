#include <stdio.h>

int main() {
    // Declare variables
    int userInput, countOdd = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &userInput);

    // Validate if the number is positive
    if (userInput <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    // Iterate through numbers up to the user input
    for (int i = 1; i < userInput; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            countOdd++;
        }
    }

    // Print the result
    printf("The number of odd numbers under %d is: %d\n", userInput, countOdd);

    return 0;
}

