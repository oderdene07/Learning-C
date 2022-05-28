#include<stdio.h>
int main(){
	int x, y, n, z;
	printf("n toog oruulna uu: ");
    scanf("%d", &n);
    for (x = 1; x <= n; ++x)
		for (y = 0; y < n; ++y){
	    		z = x*x-y*y; 
			if(z%n == 0 && x!=y && x>y)
            	printf("%d-iin kvadrataas %d-iin kvadratiig hasaad garsan too n %d-d huvaagdana\n", x, y, n); 
    }
}

