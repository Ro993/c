// No Return and No Argument
#include <stdio.h>
void add(); // function declare
int main()
{
    add(); // function call
  
}
void add() // Function define
{
    int a = 10;
    float b = 10;
    float c = a + b;
    printf("%F", c);
}