#include <stdio.h>
int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%2d ", num*2);
            num++; 
        }
        printf("\n");
    }

    return 0;
}