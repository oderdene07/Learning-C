#include<stdio.h>					
int main()
{							
	int n,m,k;
    int sum=0;
	printf("100.000 hurtelh too oruulna uu: ");
	scanf("%d", &n);
    if(n % 2 == 1)                  //sodgoi too uguig shalgaj bn
    {
        while (n > 0)               //n > 0 bolh hurtel doorh uildeliig guitsetgene
        {
            m = n % 10;
            sum = sum + m;          // toonii tsifruudiin niilberiig olj bn
            n = n / 10;
        }
        if(sum % 3 == 0)            //tsifruudiin niilber n 3-d uldegdelgui huvaagval doorh uildeliig guitsetgene
		{
            printf("3-d huvaagddag too\n");
        
		}else
            printf("3-d huvaagddaggui too\n");
    }
    else if (n % 2 == 0)            //tegsh too uguig shalgaj n=bn
	{
    	k = n % 100;                //suuliin 2 orong k-d onooj bn
    	if(k % 4 == 0)              //suuliin 2 oron 4-d uldegdelgui huvaagddag ugui shalgaj bn
		{
    		printf("4-d huvaagddag too\n");
		}
		else
			printf("4-d huvaagddaggui too\n");
	}
}
