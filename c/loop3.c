#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("Even number: %d\n", i);
        }
    }

    return 0;
}

