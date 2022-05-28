#include <stdio.h>
    int main (){
	int n, m, l;
	int i, j, k=0, o;
    int v1[10][10][10];
	printf("Davhar oruulna uu: ");
	scanf("%d", &m);
	printf("Orts oruulna uu: ");
	scanf("%d", &l);
	printf("Davhrataa heden ail bgag oruulna uu: ");
	scanf("%d", &n);
    for(int j  = 0 ; j < m; j++)
		for(int i = 0; i < l; i++){
			for(int o = 0; o < n; o++){
				k++;
    			printf("%d-r ortsnii, %d-r davhriin, %d-r ail", j+1, i+1, k);
    			printf("\n");
    		}
    		printf("\n");
		}
		printf("\n");
    }
