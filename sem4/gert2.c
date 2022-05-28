#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("2 too oruulna uu: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 = n1 - n2;
        else
            n2 = n2 - n1;
    }
    printf("Hamgiin ih yerunhii huvaagdagch n = %d",n1);

    return 0;
}
