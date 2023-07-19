#include<stdio.h>
int main(){
    int age, w; 
    printf("enter the age and weight");
    scanf("%d %d", &age,&w);
    if(age>18){
  
        if(w>50){
            printf("valid ");
        }
    
    }else{
        printf("provide a valid age");
    }
}