#include <stdio.h>
int pallindrome(int a);

int main() {
	int a;
	printf("Too oruulna uu: ");
	scanf("%d" , &a);
	pallindrome(a);
}


int pallindrome(int a) {
	int b, c, d;
	d = a;
	while(a > 0){
		c = a % 10;
		b = b * 10 + c;
		a = a /10;
	}
	if(d == b)
		printf("1");
	else
		printf("0");
}
