#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the enumber a");
	scanf("%d", &a);
	printf("Enter the enumber b");
	scanf("%d", &b);
	printf("Enter the enumber c");
	scanf("%d", &c);
	if(a>b && a>c){
		printf("a is greter then b and c");
	}
	else{
		printf("b and c is not greter then a");
	}
	return 0;
}
