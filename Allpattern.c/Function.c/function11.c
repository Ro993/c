#include<stdio.h>
void div(int a,float b);
void mul(int a, float b);

int main(){
    div(50,10);
    mul(50,10);
}
void div(int a,float b){
    float c;
    c=a/b;
    printf("%f",c);
}
void mul(int a,float b){
    float c;
    c=a*b;
    printf("%f",c);
}