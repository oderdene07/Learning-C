#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, m, i, j, even, v1[100][100], max_even=0, col;
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &m);
    for(i  = 0 ; i < n; ++i) {
    	for(j = 0; j < m; ++j){
    		printf("too oruulna uu :");
    		scanf("%d", &v1[i][j]);
		}
	}

	for(i = 0 ; i < n; ++i){
		for(j = 0; j < m; ++j){
			printf("%d ", v1[i][j]);
			if (j == m - 1)
				printf("\n");
		}
		
	}

	for(j = 0 ; j < m; j++) {
		even = 0;
    	for(i = 0; i < n; i++){
    		if(v1[i][j] % 2 == 0){
    			even++;
			}
		}
		if(even > max_even){
			col = j;
			max_even = even;
		}	
	}
	printf("%d-r bagana hamgiin ih tegsh tootoi", col+1);
}
   

