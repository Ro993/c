#include <stdio.h>
int main()
{
    int choice;

    printf("1. for alphabet\n");
    printf("2. for digit\n");
    printf("enter your choice = ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        char a;
        printf("enter your character = ");
        scanf(" %c", &a);

        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        {
            printf("it is an alphabet");
        }
        else
        {
            printf("please choose an alphabet");
        }
    }
    else if (choice == 2)
    {
        int b;
        printf("enter your value = ");
        scanf("%d", &b);

        if (b >= 0 && b <= 9)
        {
            printf("it is a digit");
        }
        else
        {
            printf("please choose a valid digit");
        }
    }
    else
    {
        printf("please choose between alphabet and digit");
    }

    return 0;
}