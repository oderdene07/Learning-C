#include <stdio.h>
int main (){
	int array[10][10];
	int rsum, csum;
    int i, j, n, k, sum1 = 0, sum2 = 0; 
    printf("Matrixiin hemjeeg ugnu uu: ");
    scanf("%d", &n);
    printf("Matrixiin utguudiig ugnu uu: ");
    for (i = 0; i < n; ++i){
        for (j = 0; j < n; ++j){
            scanf("%d", &array[i][j]);
        }
	}
	printf("Matrix: \n");
    for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
            printf(" %d", array[i][j]);
		}
            printf("\n");
    }
    
    
    for (i = 0; i < n; i++){
    	rsum=0;
        for (j = 0; j < n; j++){
            rsum = rsum + array[i][j];
		}
			printf("%d-r murnii niilber = %d\n", i+1, rsum);	
    }
    for (i = 0; i < n; i++){
    	csum=0;
        for (j = 0; j < n; j++){
            csum = csum + array[j][i];
        }
	        printf("%d-r baganii niilber = %d\n", i+1, csum);
	}
	
	for (i = 0; i < n; ++i){
        sum1 = sum1 + array[i][i];
        sum2 = sum2 + array[i][n - i - 1];
    }
		printf("\nGol diagonaliin niilber = %d\n", sum1);
		printf("Tuslah diagonaliin niilber = %d\n", sum2);
}
 
 
    
