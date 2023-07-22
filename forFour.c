#include<stdio.h>
int main(){
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        printf("%d\n",i);
    }
}