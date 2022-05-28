#include <stdio.h>
int digit_sum(int a);

int main() {
	int a;
	printf("Too oruulna uu: ");
	scanf("%d" , &a);
	
	for(int i = 1; i <= a; i++){
		if(i % digit_sum(i) == 0)
			printf("%d ", i);
	}
	
}


int digit_sum(int a) {
	int b = 0, c;
	while(a > 0){
		c = a % 10;
		b = b + c;
		a = a /10;
	}
	return b;
}
