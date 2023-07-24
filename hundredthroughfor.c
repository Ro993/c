#include<stdio.h>
int main(){
    int a=100;
    for(int i=a;i>=1;i--){
        if(i%2==0){
            printf("%d",i);
        }
        printf("\n");
    }
}