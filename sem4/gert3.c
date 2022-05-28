#include <stdio.h>

int main()
{
    int k, rmd;

    printf("     March 2020\n");
    printf(" Su Mo Tu We Th Fr Sa\n");

    for(k = 1; k < 32; k++) {
        if(k % 7 == 0){
            printf(" %2d\n", k); 
        }
        else {
            printf(" %2d", k);
        }
    }
    printf("\n\n03.08 - Olon ulsiin emegteichuudiin bayar");
    printf("\n03.18 - Tsergiin bayar\n");
    return 0;
}

