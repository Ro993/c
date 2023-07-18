#include<stdio.h>
int main(){
	int M,S,E,H,C;
	float  result;
	printf("Enter a subject marks M,S,E,H,c");
	scanf("%d %d %d %d %d", &M, &S, &E,&H, &C);
	if(M>40 && S>40 && E>40 && H>40 && C>40){
		result =(M+S+E+H+C)/5;
		printf("result is %f ", result);
	}else{
		printf("pehle pass hoke aao");
	}
}
