#include <stdio.h>

int count (char s[]) ;

int main() {
	int e;
	char s[100];
	printf("Temdegt oruulna uu: ");
	gets(s);
	e = count(s);
	printf("egshig: %d shirheg bn", e);
}

int count (char s[100]) {
	int i = 0, count=0;
    while(s[i] != '\0'){
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||  s[i] =='o' ||  s[i] == 'u')
			count++;
		i++;
	}
	return count;
}

