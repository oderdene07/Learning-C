#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	char s1[50];
	printf("1-r temdegt: ");
	gets(s);
	printf("2-r temdegt: ");
	gets(s1);
	strcat(s, s1);
	puts(s);

	return 0;
}





