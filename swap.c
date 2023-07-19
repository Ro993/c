#include<stdio.h>
int main(){
	int a=30;
	int b=20;
	printf("enter the number %d a=", a);
	printf("enter the number %d b=", b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("enter the number after swap %d a=", a);
	printf("enter the number swap %d b=", b);
}
