#include<stdio.h>
int main(){
    int i,space,j;
    for(i=1;i<=3;i++){
        for(space=2;space<=i;space++){
            printf(" ");
        }
        for(j=3;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}