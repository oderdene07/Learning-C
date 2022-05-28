#include<stdio.h>

int main(){
	int n,m,x,found;
    int v1[100][100];
	printf("1-100 giin hoorond bagana oruulna uu: ");
	scanf("%d", &n);
	printf("1-100 giin hoorond mur oruulna uu: ");
	scanf("%d", &m);
    for(int i = 0; i < n; i++){
    	for(int j  = 0 ; j < m; j++) {
    		printf("\n(%d %d) dahi toog oruulna uu :", i+1 , j+1);
    		scanf("%d", &v1[i][j]);
		}
	}
	printf("\nx toog oruulna uu :");
    scanf("%d", &x);

	for(int i = 0; i < n; i++){
		for(int j = 0; j< m; j++){
			if(x==v1[i][j]){
				printf("(%d %d) ", i+1, j+1);
				found++;
		}
	}
	}
	if(found == 0){
		printf("-1");
	}
}
