#include <stdio.h>
int main()
{
	int i,j,n;
	printf("n too oruulna uu: ");
	scanf("%d", &n);
	if(n%2==0){
		for(i = 0; i < n/2; i++){
	   		printf("xoxo\n");
	    	printf("oxox\n");
	    }
	}
    else{
	    for(i = 0; i < n/2; i++){
	   		printf("xoxo\n");
	    	printf("oxox\n");
	    }
	    printf("xoxo\n");
	}
}

