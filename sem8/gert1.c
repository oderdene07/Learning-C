#include <stdio.h>
#include <string.h>
 
int main(){
    char s[200];
    int count = 0;
	int i;
 
    printf("Temdegtiin tsuvaag oruulna uu:\n");
    gets(s);
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ')
            count++;    
    }
    printf("Ugiin too: %d\n", count + 1);
}
