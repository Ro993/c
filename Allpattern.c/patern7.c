#include <stdio.h>

int main() {
    for (int i = 0; i < 4; i++) { 
        for (int j = 5; j >= 1; j--) { 
            printf("%d", i);
        }
        printf("\n"); 
    }

    return 0;
}
