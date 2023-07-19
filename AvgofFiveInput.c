#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float avg;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    avg = (a + b + c + d + e) / 5;

    printf("Average:  %f\n", avg);

    if (avg >= 80)
    {
        printf("Grade: A\n");
    }
    else if (avg >= 60)
    {
        printf("Grade: B\n");
    }
    else if (avg >= 50)
    {
        printf("Grade: C\n");
    }
    else if (avg >= 45)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
