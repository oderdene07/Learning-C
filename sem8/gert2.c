#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[100], max_vowel_word[100];
    char newString[10][10]; 
    int i, j, ctr, counter, max_vowel = 0;
    
    gets(str1);	
 
    j = 0; ctr = 0;
    for(i = 0; i <= strlen(str1); i++){
        if(str1[i] == ' ' || str1[i] == '\0'){
            newString[ctr][j] = '\0';
            ctr++;
            j=0;
        }
        else{
            newString[ctr][j] = str1[i];
            j++;
        }
    }

	for(i = 0; i < ctr; i++){
    	counter = 0;
		for(j = 0; j <= strlen(newString[i]); j++){
			if (newString[i][j] == 'a' || newString[i][j] == 'o' || newString[i][j] == 'u' ||newString[i][j] == 'e' ||newString[i][j] == 'i'|| newString[i][j] == 'y'){
			counter++;
			}
		}
		if(max_vowel < counter){
    		max_vowel = counter;
    		strcpy(max_vowel_word, newString[i]);
		}
	}
	printf("\"%s\" ene ug hamgiin ih egshigtei", max_vowel_word);
}
