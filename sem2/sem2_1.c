# include <stdio.h>
int main ()
{
int a, b, c, d;
scanf ("%d%d", &a, &b) ; 		// garaas a, b 2 toog avna
c = (a > b) * a + (a <= b) * b;	//ehleed baga toog gargaj baina
d = (a > b) * b + (a <= b) * a; // daraa n ih toog gargaj baina
printf ("%d\n", d) ;	//d utgiig hevlene
printf ("%d\n", c) ;	//c utgiig hevlene
}

