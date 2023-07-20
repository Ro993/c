#include<stdio.h>
int main(){
    int num;
    printf("enter the value");
    scanf("%d",&num);
    int rem,sum=0;
    while(num>0){
        rem =num%10;
        sum =sum*10+rem;
        num=num/10;

    }
    printf("value is %d", sum);
}