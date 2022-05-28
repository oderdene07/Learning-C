#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("n toog oruulna uu: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        sum += i;
    }
    printf("n toonii niilber = %d", sum);
    return 0;
}

