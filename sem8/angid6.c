#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char s[50];
	printf("Uguulber oruulna uu: ");
	gets(s);
	while(s[i]!='\0'){ 
        if(s[i]==' ') 
            printf("\n"); 
        else 
            printf("%c",s[i]); 
        i++; 
    } 

	return 0;
}

