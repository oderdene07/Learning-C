#include <stdio.h>
int main()
{
	int i,j,n;
	printf("n too oruulna uu: ");
	scanf("%d", &n);
    for(i = 0; i < n; i++){
    	for(j = 0; j <= i; j++){
    		printf("*");
		}
    	printf("\n");
	}
	for(i = n; i > 1; i--){
    	for(j = i; j > 1; j--)
    		printf("*");
    	printf("\n");
	}
}
