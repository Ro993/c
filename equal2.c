#include<stdio.h>
int main(){
	int a;
	printf("Enter the number a");
	scanf("%d ", &a);

	if(a%11==0 && a%5==0){
		printf(" number is divisible :");
	}
	else{
		printf("Fail");
	}
	return 0;
}
