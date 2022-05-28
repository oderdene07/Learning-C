# include <stdio.h>
int main ()
{
int a, b, c, d, e, f;
printf("3 too oruulna uu: ");
scanf ("%d", &a) ;				//garaas too avj a-d onoon
scanf ("%d", &b) ;				//garaas too avj b-d onoon
scanf ("%d", &c) ;				//garaas too avj c -d onoon


d = (a > b && a > c) * a + (b > a && b > c) * b + (c > a && c > b) * c;			
//herev a>b ba a>c bol hariug a gaar urjine + herev b>a ba b>c bol hariug b geer urjine + herev c> a ba c>b bol hariug c geer urjine garsan hariug d-d onoon
e = (a < b && a < c) * a + (b < a && b < c) * b + (c < a && c < b) * c;				//zarchim n deerhtei adilhan hariu n 0 esvel 1 garna
f = (a > b && a < c || a < b && a > c) * a + (b > c && b < a || b < c && b > a) * b + (c > a && c < b || c < a && c > b) * c;		
//ene murnii yalgaa n haaltan dotr bga ilerhiileliin ali neg n unen bol urjih zamaar yavna 

printf ("Hamgiin ih = %d\n", d) ; 			// harmgiin ih = ged d huvisagchiig hevlene
printf ("Hamgiin baga = %d\n", e) ;			// harmgiin baga = ged e huvisagchiig hevlene
printf ("Goliin too = %d\n", f) ;			// goliin too = ged f huvisagchiig hevlene

}
