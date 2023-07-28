// Return and Argument
#include <stdio.h>
int show(int a, int b, int c, int d); // function declare
int main()
{
    int e = show(5, 10, 15, 20);
    printf("%d", e);
    return 0;
}
// function define
int show(int a, int b, int c, int d)
{
    return a + b + c + d;
}