// No Return and No Argument
#include <stdio.h>
void add(); // function declare
int main()
{
    add(); // function call
    return 0;
}
void add() // Function define
{
    int a = 10, b = 10;
    int c = a + b;
    printf("%d", c);
}