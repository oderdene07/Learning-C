#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j, v1[100][100], a, b, k, l;
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
	for(k = 0; k<n;k++){
		for(i = 0, j = n-k-1; i < n-k, j >= 0; i++, j--){
			v1[i][j] = n-k;
		}
		for(i = k, j = n-1; i >n-1, j >=0;i++,j--){
			v1[i][j] = n-k;
		}
	}
	
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
            printf(" %d", v1[i][j]);
		}
            printf("\n");
    }
}
