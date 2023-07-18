#include<stdio.h>
int main(){
	char cht;
	printf(" enter alphabet");
	scanf("%c", &cht);
	if(cht =='a' || cht =='g'){
		printf("Match");
	}
	else{
		printf("not match");
	}
}
