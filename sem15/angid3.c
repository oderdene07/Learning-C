#include <stdio.h>
#include <stdlib.h>
int * read (int n){
	int *p;
	p = (int*) malloc ( sizeof (int) * n) ;
	if (p == NULL ) {
		printf (" Sanax oi xvrsengvi !\n") ;
		exit (1) ;
	}
	for (int i = 1; i < n; i++)
		scanf ("%d", &p[i]);
	p[0]=0;
	for (int i = 1; i < n; i++){
		for(int j = 0; j < n ; j++){
			if(p[j]%i==0){
				p[0] += i;
			}
		}
	}
	return p;
}
int main (){
	int *a, i;
	a = read (5);
	printf ("Buh toonii huwaagchidiin niilber: %d", a[0]);
	free (a);
	return 0;
}

