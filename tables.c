#include <stdio.h>

int main()
{
    int rows = 10;
    int cols = 10;

    printf("Multiplication Table from 1 to 10 \n");

    int i = 1;

    while (i <= rows)
    {
        int j = 1; //

        while (j <= cols)
        {
            printf(" %d\n", i * j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
