#include <stdio.h>

int is_even (int) ;

int main() {
    int i, n;
    printf("Too oruulna uu: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        if(is_even(i) == 0)
            printf("%d ", i);
}

int is_even (int i) {
    if(i%2==0)
        return 1;
    else 
        return 0;
}

