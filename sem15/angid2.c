#include <stdio.h>
#include <stdlib.h>

int *get_array (int n, int value ){
	int s[100];
	int *p;
	p = (int*)malloc(n * sizeof(int)) ;
	if (p == NULL ) {
		printf (" Sanax oi xvrsengvi !\n") ;
		exit (0) ;
	}
	else {
		for(int i = 0; i < n; i++){
			s[i]=value;
		}
		return s;
	}
}
int main(){
	int *p;
	p = get_array(5,10);
	for(int i = 0; i < 5; i++){
		printf("%d\n", p[i]);
	}
}

