#include <stdio.h>
#include <math.h>

int main() {
    printf("Armstrong numbers between 1 and 500:\n");

    for (int num = 1; num <= 500; ++num) {
        int originalNum = num;
        int n = 0, result = 0;

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate the sum of nth power of individual digits
        while (originalNum != 0) {
            int remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check if the result is equal to the original number
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

