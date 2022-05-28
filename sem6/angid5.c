#include<stdio.h>

int main(){
	int n, v[100], i;
	bool a=true, d=true;
	printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for (i = 0; i < n; i++){
    	printf("\na toog oruulna uu :");
    	scanf("%d", &v[i]);
	}
	i=0;
	while ((a || d) && i < n - 1) {
    	if (v[i] < v[i+1])
			d = false;
    	else if (v[i] > v[i+1])
			a = false;
    		i++;
	}
	if (a)
	    printf("\nUsuh daraalaltai.\n");
	else if (d)
	    printf("\nBuurah daraalaltai.\n");
	else
	    printf("\nZambraagui daraalaltai.\n");
	
	return 0;
}
