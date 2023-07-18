#include<stdio.h>
int main(){
	int a=30;
	int b=20;
	int c;
	printf("enter the number a:%d\n ", a);
	printf("enter the number b:%d\n ", b);
	c=a;
	a=b;
	b=c;
	printf("enter the number after swap a:%d\n", a);
	printf("enter the number after swap b:%d ", b);
}
