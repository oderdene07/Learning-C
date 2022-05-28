#include <stdio.h>

int main (){
	int x;
	int *p;
	p = &x;
	printf("Too oruulna uu: ");
	scanf("%d", p);
	printf ("Tanii oruulsan too: %d\n", x) ;
	return 0;
}
