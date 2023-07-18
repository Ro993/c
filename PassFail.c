#include<stdio.h>
int main(){
	int Hindi,Math,English,Science,Sst;
	printf("Enter the subject marks of Hindi, Math, English, Science , Sst");
	scanf("%d %d %d %d %d", &Hindi, &Math, &English, &Science, &Sst );

	if(Math>=40 && Hindi>=40 && Science>=40 && Sst>=40 && English>=40){
		printf("you are pass");
	}
	else{
		printf("Fail");
	}
	return 0;
}
