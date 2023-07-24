#include <stdio.h>

int main() {
    int i=1;
    int j=100;

    printf("Numbers divisible by 7 and 3 between %d and %d:\n", i, j);

    for (int i = 1; i <= j; i++) {
        if (i % 7 == 0 && i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
