#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <=rows; i++) { 
        for (int j = 1; j <=rows; j++) { 
           if(i==1){
            printf(" 1");
           }else if (i==2)
           {
            printf(" 4");
           }else if (i==3)
           {
            printf(" 9");
           }else if (i==4)
           {
            printf(" 16");
           }
           
        }
        printf("\n"); 
    }

    return 0;
}
