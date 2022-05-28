#include<math.h>					// math.h gesen sang duudaj bn														
#include<stdio.h>					// stdio.h.h gesen sang duudaj bn
int main(){							//main gesen funkts dotor programaa ehluulj bn
	double a,h,s;					// a,h,s gesen butarhai toon huvisagch zarlaj bn
	
	printf("a toog oruulna uu ");	//printf funkts ashiglan "a toog oruulna uu" gej hevlej baina
	scanf("%lf", &a);				// scanf funktsiig ashiglan garaas a huvisagchd utga onooj bn
	printf("h toog oruulna uu ");	//printf funkts ashiglan "h toog oruulna uu" gej hevlej baina
	scanf("%lf", &h);				// scanf funktsiig ashiglan garaas h huvisagchd utga onooj bn
	
	s=a*h/2;						// s huvisagchid a*h/2 gesen utgiig onooj bn
	printf("\nTalbai = %.2f ",s);  //printf funkts ashiglan bodlogiin talbaig hevlej baina
	
	return 0;
	
}
`