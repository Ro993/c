#include<stdio.h>
int main(){
	int Age;
	printf("Enter the Age");
	scanf("%d", &Age);
	if(Age>=18){
		printf("You are eligible for Votter id");
	}
	else{
		printf("sorry , Age is less than 18");
	}
	return 0;
}
