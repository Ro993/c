#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <=rows; i++) { 
        for (int j = 1; j <=rows; j++) { 
           if(j==1){
            printf("1");
           }else if (j==2)
           {
            printf(" 4");
           }else if (j==3)
           {
            printf(" 9");
           }else if (j==4)
           {
            printf(" 16");
           }
           
        }
        printf("\n"); 
    }

    return 0;
}
