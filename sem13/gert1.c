#include<stdio.h>

void find (int a[], int n, int *min, int *max){
	*min = a[0];
	*max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > *max)
			*max = a[i];
		if(a[i] < *min)
			*min = a[i];
	}
	
}

int main(){
	int a[100], i, n, x, y;
	printf("Heden shirheg too oruulah ve?\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("%d-r too: ", i + 1);
		scanf("%d", &a[i]);
	}
	find(a, n, &y, &x);
	printf("hamgiin baga ni: %d\n", y);
	printf("hamgiin ih ni: %d", x);
}
