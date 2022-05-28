#include <stdio.h>

int A [100];
int prime_range (int a, int b);

int main() {
    int a, b, k;
    printf("a Too oruulna uu: ");
    scanf("%d", &a);
    printf("b Too oruulna uu: ");
    scanf("%d", &b);
    k=prime_range(a, b);
    for(int i = 0; i < k; i++){
    	printf("%d ", A[i]);
	}
	printf("\n%d shirheg anhnii too bn", k);
}

int prime_range (int a, int b){
	int flag, k=0;
	while (a < b) {
    	flag = 0;
		
		for (int i = 2; i <= a / 2; i++) {
			if (a % i == 0) {
            	flag = 1;
            	break;
        	}
        }
		if(flag == 0){
			A[k]=a;
			k++;
			
		}
		a++;
	}
	return k;
}

