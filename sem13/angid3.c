#include<stdio.h>
#include<string.h>

void read(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d-r too: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void print(int a[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void find(int a[], int n, int *addr, int *addr1 ){
	int sondgoi = 0;
	int tegsh = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			tegsh++;
		else
			sondgoi++;
	}
	*addr = tegsh;
	*addr1 = sondgoi;
}

int main (){
	int a[10];
	printf("5 shirheg too oruulna uu: \n");
	read(a, 5);
	print(a, 5);
	printf("\n");
	int x, y;
	find(a, 5, &x, &y);
	printf("tegsh toonuudiin too: %d\n", x);
	printf("sondgoi toonuudiin too: %d\n", y);
	return 0;
}
