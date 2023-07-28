// No Return and No Argument
#include <stdio.h>
void show(); // function declare
int main()
{
    show(); // function call
    return 0;
}
void show() // Function define
{
    int a = 10, b = 10;
    int c = a + b;
    printf("%d", c);
}