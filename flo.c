#include <stdio.h>

int main() {
    float a;
    
    printf("Enter a number ");
    scanf("%f", &a);
    
    if (a - (int)a != 0.0) {
        printf("This is a float value ");
    } else {
        printf("This is a integer value");
    }
    
    return 0;
}
