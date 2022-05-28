#include<stdio.h>

int main(){
	int n,x,found;
    int v1[100];
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for(int i  = 0 ; i < n; i++) {
    	printf("\na toog oruulna uu :");
    	scanf("%d", &v1[i]);
	}
	printf("\nx toog oruulna uu :");
    scanf("%d", &x);

	for(int i = 0; i< n; i++){
		if(x==v1[i]){
			printf("%d ", i+1);
			found++;
		}
	}
	if(found == 0){
		printf("-1");
	}
}
