#include <stdio.h>
int main(){
	int n, m, i, j;
    int v1[100],v2[100];
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for(int i = 0 ; i < n; i++) {
    	printf("a toog oruulna uu : ");
    	scanf("%d", &v1[i]);
	}
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &m);
	for(int j = 0 ; j < m; j++) {
    	printf("b toog oruulna uu : ");
    	scanf("%d", &v2[j]);
	}
	for(i = 0; i < n; i++){
    	for(j = 0; j < m;j++){
        	if(v1[i] == v2[j]){
				printf("\nDavhardaj bui element %d", v1[i]);
          }
       }
    } 
}
