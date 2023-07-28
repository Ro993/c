// Return and Argument
#include <stdio.h>

int Voter(int age); // function declare
int main()
{
    int age;
    scanf("%d", &age);
    int a = Voter(age);
    return 0;
}
// function define
int Voter(int age)
{
    if (age >= 18)
    {
        printf("you are eligible =");
    }
    else
    {
        printf("you are not eligible");
    }
    return age;
}