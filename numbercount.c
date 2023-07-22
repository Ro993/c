#include <stdio.h>

int main() {
    int start, end, count = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ensure start is smaller than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start + 1; i < end; ++i) {
        count++;
    }

    printf("Number of integers between %d and %d is: %d\n", start, end, count);

    return 0;
}
