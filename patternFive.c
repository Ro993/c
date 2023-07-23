
#include <stdio.h>

int main() {
    int lines = 3; 

    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("1");
            } else if (j == 2) {
                printf("4");
            } else if (j == 3) {
                printf("9");
            }
        }
        printf("\n");
    }

    return 0;
}



// #include <stdio.h>

// int main() {
//     int numLines = 3; // The number of lines in the pattern

//     for (int i = 1; i <= numLines; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d", (i == 1) ? 1 : ((i == 2) ? 4 : 9));
//         }
//         printf("\n");
//     }

//     return 0;
// }
