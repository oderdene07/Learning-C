#include<stdio.h>

int main(){
	int i,j,n;
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
	if(n>=1 && n<100){
		int x[n];
		printf("%d shirheg too oruulna uu:", n);
		for(i=0; i<n; i++)
			scanf("%d", &x[i]);
		for(j=n-1; j>=0; j--)
			printf("%d  ", x[j]);
	}else
	printf("buruu too bn");
	return 0;
}

