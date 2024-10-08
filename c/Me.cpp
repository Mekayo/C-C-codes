#include <stdio.h>

int main() {
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
    for (int i = 0; i<=n; i=i+4) {
        if (i % 2 == 0) {
            printf("Even number: %d\n", i);
        }
    }

    return 0;
}

