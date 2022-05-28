# include <stdio.h>
int main ()
{
int a = 0;		// a-d 0 gesen utga onooj baina
int b = 2;		// b-d 2 gesen utga onooj baina
int c = 1;		// c-d 3 gesen utga onooj baina
int d = 1;		// d-d 1 gesen utga onooj baina
int f = 1;		// f-d 7 gesen utga onooj baina
a || printf ("o") && c;				//a hudal c unen ued "o"-g hevlene
c && d || printf ("x") ;			//c,d giin hariu unen bolhoor x-iig hevlehgui
(d || b) && f || printf ("x") ;		//b,d,f 3-laa unen bolhoor x-iig hevlehgui
a + b == 1 && printf ("x") ;		//0+2=1 baih yum bol x iig hevlene
f && printf ("o") ;					//f unen bolhoor "o"-g hevlene
b && d || printf ("o") ;			//b,d unen bolhoor "o"-g hevlehgui 
b + d == 3 && printf ("o") ;		// 2+1=3 baih yum bol o-g hevlene
}
