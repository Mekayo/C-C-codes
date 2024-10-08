#include<stdio.h>

float squareArea(float side);
float rectArea(float a, float b);
float circleArea(float rad);

int main() {
    float s, r, c, a, b, side, rad;
    printf("Type r for area of rectangle, s for area of square, c for area of circle: ");
    char ch;
    scanf(" %c", &ch); // Added space before %c to skip leading whitespace

    if (ch == 'r') {
        printf("Enter the value of a & b: ");
        scanf("%f %f", &a, &b);
        float re = rectArea(a, b);
        printf("Area of rectangle = %f\n", re); // Changed r to re
    }
    else if (ch == 's') { // Changed if to else if
        printf("Enter the value of side: ");
        scanf("%f", &side);
        float sq = squareArea(side);
        printf("Area of square = %f\n", sq); // Changed s to sq
    }
    else if (ch == 'c') { // Changed if to else if
        printf("Enter the value of radius: ");
        scanf("%f", &rad);
        float ci = circleArea(rad);
        printf("Area of circle = %f\n", ci); // Changed c to ci
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}

float squareArea(float side) {
    return side * side;
}

float rectArea(float a, float b) {
    return a * b;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

