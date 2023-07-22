#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a!= 0)
    {
        a++;
    }
    printf("numbers between %d and %d: ", a, b);
    int i = a;
    while (i <= b)
    {
        printf("%d \n", i);
        i += 1;
    }
    printf("\n");

    return 0;
}