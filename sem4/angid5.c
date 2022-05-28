#include<stdio.h>					
int main(){
	float n, i;
	float f;
	printf("n toog oruulna uu:");
	scanf("%f", &n);
	for(i = 0; i<4; i++){
		printf("%.f\n", i);
		f = 32 + 1.8 * i;
		printf("%.2f\n", f);
	}
} 
