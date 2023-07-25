#include<stdio.h>
int show(int a); //function declare
int main(){
    int b=show(5);
    printf("%d",b);
    return 0;
}
//function define
int show(int a){
    return a;
}