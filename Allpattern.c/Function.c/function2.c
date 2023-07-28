// Return and Argument
#include <stdio.h>
int show(int a, int b); // function declare
int main()
{
    int c = show(5, 10);
    printf("%d", c);
    return 0;
}
// function define
int show(int a, int b)
{
    return a + b;
}