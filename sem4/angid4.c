#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("n toog oruulna uu: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i+=2){
        sum += i;
    }
    printf("tegsh toonii niilber = %d", sum);
    return 0;
}

