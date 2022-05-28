#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j;
	float sum=0, v1[100];
	float avg;
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for(i  = 0 ; i < n; i++) {
    	printf("undur oruulna uu :");
    	scanf("%f", &v1[i]);
    	sum = sum + v1[i];
	}
	avg = sum / n;
    printf("Dundaj n =%.2f\n", avg);
    
	for(i = 0; i < n; i++)
		if(v1[i]>avg)
    		printf("Dundajaas deesh undurtei = %.2f\n", v1[i]);
    		
    return 0;
}
   

