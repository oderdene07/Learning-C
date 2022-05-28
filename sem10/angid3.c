#include <stdio.h>

int count (int n, int A[]) ;

int main() {
	int a;
	int e[100];
	printf("Too oruulna uu: ");
	scanf("%d", &a);
	e[100] =count(a, e);
	for(int i = 0; e[i-1] != a; i++)
		printf("%d ", e[i]);

}

int count (int n, int A[]) {
	int  j=0;
	printf("Huvaagchid: ");
	for(int i = 1; i <= n; i++){
		if(n%i==0){
			A[j]=i;
			j++;
		}
	}
	return A[j];
}

