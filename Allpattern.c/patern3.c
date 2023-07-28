#include <stdio.h>

int main() {
    int number = 1;

    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            printf(" %2d", number);
            number++;
        }
        printf("\n"); 
    }

    return 0;
}
