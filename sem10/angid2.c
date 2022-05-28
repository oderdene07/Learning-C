#include <stdio.h>

int count (int n) ;

int main() {
	int a;
	int e[100];
	printf("Too oruulna uu: ");
	scanf("%d", &a);
	count(a);
}

int count (int n) {
	printf("Huvaagchid: ");
	for(int i = 1; i <= n; i++){
		if(n%i==0){
			printf("%d ", i);
		}
	}
}

