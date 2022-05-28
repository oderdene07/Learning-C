#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];

    printf("1-r ug: ");
    gets(a);
    printf("2-r ug: "); 
    gets(b);
    
    if (strcmp(a, b) == 0)
    	printf("Adilhan ugnuud bn");
	else
    	printf("Uur ugnuud bn" );
 
    
    return(0);
}
