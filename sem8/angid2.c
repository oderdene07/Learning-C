#include<stdio.h>
#include<string.h>
int main(){
	int i, count = 0;
	char s[100];
	printf("Temdegt oruulna uu: ");
	gets(s);
	for(i = 0; i < strlen(s); i++){
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||  s[i] =='o' ||  s[i] == 'u')
			count++;
	}
	
	printf("egshig: %d shirheg bn", count);
	
	return 0;
}
