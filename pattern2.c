#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 2; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}