# include <stdio.h>
int main ()
{
int a, b, c, d, e;
printf("3 taliig oruulna uu: ");
scanf ("%d", &a) ;			// garaas too avj a-d onoon
scanf ("%d", &b) ;			// garaas too avj b-d onoon
scanf ("%d", &c) ;			// garaas too avj c-d onoon

a == b && b == c && c == a && printf("Zuv gurvaljin");		//garaas avsan 3 too bug hoorondoo = baival zuv gurvaljin gj hevlene
a != b && b != c && c != a && printf("Eldev talt gurvaljin");		//garaas avsan 3 too bugd yalgaatai baih yum bol eldev tald gurvaljin gej hevlene
a == c && a != b && printf("Adil hajuud gurvaljin") || b == a && b != c && printf("Adil hajuud gurvaljin") || b == c && a != c && printf("Adil hajuud gurvaljin");   
// ali neg 2 tal n = ba 3 dahi taltai = bish baival adil hajuut gurvaljin gj hevlene
}
