#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a b c");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("a is maximum");
    }
    else if(b>a && b>c){
        printf("b is max");
    }
    else if(c>a && c>b){ 
        printf("b is max");
    }
    else{
        printf("all are equal");
    }
}