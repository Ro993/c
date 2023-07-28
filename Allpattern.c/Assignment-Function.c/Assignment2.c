// Return and Argument
#include <stdio.h>
int add(int a, int b); // function declare
int sub(int a, int b); // function declare
int mul(int a, int b); // function declare
int div(int a, int b); // function declare
int mod(int a, int b); // function declare
int main()
{
    int c = add(5, 10);
    int d = sub(15, 10);
    int e = mul(5, 10);
    int f = div(50, 10);
    int g = mod(50, 10);
    printf("%d %d %d %d %d", c,d,e,f,g);
    return 0;
}
// function define
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}