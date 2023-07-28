// Return and Argument
#include <stdio.h>
void add(int a, float b); // function declare
int main()
{
    add(9,10.1);
    return 0;
}
// function define
void add(int a, float b)
{
    float c;
    c=a+b;
    printf("%d",c);
  
}