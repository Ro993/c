#include<stdio.h>
int main(){
    int i,j,num=3;
    for(i=1;i<=num;i++){
        for (j=1;j<=i; j++)
        {
          printf("%d",i);
         
        }
        printf("\n");
    }
}