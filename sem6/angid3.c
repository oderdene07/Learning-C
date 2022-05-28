#include<stdio.h>

int main(){
	int n,m;
    int v1[100],v2[100],v3[100];
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for(int i  = 0 ; i < n; i++) {
    	printf("a toog oruulna uu :");
    	scanf("%d", &v1[i]);
	}
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &m);
	for(int i  = 0 ; i < m; i++) {
    	printf("b toog oruulna uu :");
    	scanf("%d", &v2[i]);
	}

	for(int i  = 0; i < n; i++){
		v3[i]=v1[i];
		
	}

	for(int i = n, j = 0; i < n+m, j < m; i++, j++){
		v3[i]=v2[j];
		
	}
	for(int i = 0; i< n+m; i++){
		printf("%d ", v3[i]);
	}

}
