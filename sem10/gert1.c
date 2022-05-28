#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void read_2darray(int a[][100], int n, int m){
	int i, j ;
	for(i = 0; i < n; i++)
	    for ( j = 0; j < m; j++)
	        scanf("%d", &a[i][j]);
}
void print_2darray(int a[][100] , int n, int m){
	int i , j;
	for ( i = 0; i < n; i++) {
	    for ( j = 0; j < m; j++)
	        printf("%d  ", a[i][j]);
	    printf(" \n");
	}
}
void min(int a[][100], int n, int m, int row[], int col[]){
    int i, j = 0, min = 0, k = 0;
    for(i = 0; i < m; i++){
        j = 0;
        min = a[i][j];
        for(j = 0; j < n; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
        row[k] = min;
        k++;
    }

    k = 0;
    i = 0;
    for(j = 0; j < m; j++){
    	i = 0;
    	min = a[i][j];
        for(i = 0; i < n; i++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
        col[k] = min;
        k++;
    }
}
int main(){
	int c_row, c_col ;
	int A[100], B[100];
	int C[100][100];
	int i;
	
	printf("xusnegtiin mor, baganii toog oruul : ");
	scanf("%d%d",&c_row, &c_col ) ;
	
	read_2darray (C, c_row, c_col) ;
	print_2darray (C, c_row, c_col) ;
	
	min(C, c_row, c_col, A, B);
	
	printf("mur buriin hamgiin baga: \n");
	for(i = 0; i < c_row; i++) {
	        printf("%d-r muriin hamgiin baga: %d\n", i+1, A[i]) ;
	}
	printf("bagana buriin hamgiin baga: \n");
	for (i = 0; i < c_col ; i++) {
	    printf( "%d-r baganiin hamgiin baga: %d\n", i+1, B[i]) ;
	}
	return 0;
}
