#include<stdio.h>
int main()
{
    float onoo, dun;		//onoo, dun n butarhai too baina
    printf("Onoo: ");		// onoo: gej hevlene
    scanf("%f",&onoo);		//garaas butarhai too avj onoo-d onoon
    
    dun = onoo * 100 / 35;	//dun-d garaas avsan toog 100-d urjed 35-d huvaana
    
  	if(dun<60)				// herev dun 60 aas baga bol doorh uildeliig hiine
    {
        printf(" %.1fF", dun);
    }
    else if(dun>=60 && dun<70)		// hervee dun n 60 tai = ba ih, 70-aas baga bol doorh uildeliig hevlene
    {
        printf(" %.1fD", dun);
    }
    else if(dun>=70 && dun<80)		// hervee dun n 70 tai = ba ih, 80-aas baga bol doorh uildeliig hevlene
    {
        printf(" %.1fC", dun);
    }
    else if(dun>=80 && dun<90)		// hervee dun n 80 tai = ba ih, 90-aas baga bol doorh uildeliig hevlene
    {
        printf(" %.1fB", dun);
    }
    else							// busad ued doorh uildeliig hevlene
    {
        printf(" %.1fA", dun);
    }
}	
