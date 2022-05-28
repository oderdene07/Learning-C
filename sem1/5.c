#include<math.h>
#include<stdio.h>
int main(){
	double a,b,c;
	double result;
	double arg;
	double PI = 3.14;
	printf("a toog oruulna uu ");
	scanf("%lf", &a);
	printf("b toog oruulna uu ");
	scanf("%lf", &b);
	printf("untsug oruulna uu ");
	scanf("%lf", &arg);
	
	arg = (arg * PI) / 180; 					// untsugiig radian bolgoj bn
    result = cos(arg);							// result utgand cos funkts ashiglan utga onooj bn
	c=sqrt(b*b+a*a-2*a*b*result);				// c huvisagchid nguu taliin urtiin utgiig onooj ugj bn
	printf("\nNogoo taliin urt = %.2f ",c);

    return 0;
}
