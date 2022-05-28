#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, m, i, j, v1[100][100];
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &m);
    for(i  = 0 ; i <= n; i++) {
    	for(j = 0; j < m; j++){
    		v1[i][j] = i+1;
		}
	}
	
	for (i = 0; i <= n; i++){
		for (j = 0; j < m; j++){
            printf(" %d", v1[i][j]);
		}
            printf("\n");
    }
}
