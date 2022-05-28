#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
int join (int A[] , int B[] , int n, int m);


int  main() {
	int a[100] , b[100] , n, m;
	printf("1-r husnegtiin urtiig oruulna uu: ");
	scanf ("%d", &n) ;
	printf("\n1-r husnegtiin toog oruulna uu: ");
	read (a, n) ;
	print (a, n) ;
	
	printf("\n2-r husnegtiin urtiig oruulna uu: ");
	scanf ("%d", &m) ;
	printf("\n2-r husnegtiin toog oruulna uu: ");
	read (b, m) ;
	print (b, m) ;
	printf("\n");
	int k = join (a, b, n, m);
	print (a, k);
	return 0;
	
}

void read(int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    	scanf("%d", &a[i]);
}
void print(int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    	printf("%d ", a[i]);
}

int join (int A[] , int B[] , int n, int m){
	int j, i;
	for(i = n, j = 0; j < m, i < n+m; i++, j++){
		A[i] = B[j];
		
	}
	return n+m;
}

