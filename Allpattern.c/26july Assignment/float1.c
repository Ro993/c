#include <stdio.h>
int main()
{
    float f;
    printf("Enter the value : ");
    scanf("%f", &f);
    int a = f;
    if (a == f)
    {
        printf(" ----------Integer-------------  ");
    }
    else
    {
        printf("---------------float value------------");
    }
}