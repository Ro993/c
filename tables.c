#include <stdio.h>

int main() {
    int range;

    printf("Enter the range for multiplication tables: ");
    scanf("%d", &range);

    // Print multiplication tables from 1 to the given range
    for (int i = 1; i <= range; i++) {
        printf("Multiplication table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
