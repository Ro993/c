#include<stdio.h>
int main(){
	int a;
	printf("enter a number a");
	scanf("%d",&a);
	if(a%7==0 || a%11==0){
		printf("divisible");
		
	}
	else{
		printf("not");
	}
}
