#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 4; j++)
        { // Loop from 1 to 4
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
