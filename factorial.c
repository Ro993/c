#include<stdio.h>
int main(){
    int num =5;
    int i=1;
    int fact =1;
    // int temp=num;
    while(i<=num){
       fact =fact*i;
        i++;
    }
   printf("factorial is %d", fact);

}