#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid(char pwd[]);

int main(){
	char pwd[100];
	gets(pwd);
	if(is_valid(pwd)==1)
		printf("1. Heterhii bogino bn\n");
	else if(is_valid(pwd)==2)
		printf("2. Tom useg oruulna uu\n");
	else if(is_valid(pwd)==3)
		printf("3. 3-aas ih too oruulna uu\n");
	else if(is_valid(pwd)==4)
		printf("4. Yadaj neg temdegt oruulna uu");
	else if(is_valid(pwd)==0)
		printf("0");
		
}

int is_valid(char pwd[ ]){

	if(strlen(pwd) < 6)
		return 1;
		
	for(int i = 0; i < strlen(pwd); i++){
		if(!isupper(pwd[i]) && !isupper(pwd[0]))
			return 2;
	}
	
	int count = 0;
	for(int i = 0; i < strlen(pwd); i++){
		if(pwd[i] == '1' || pwd[i] == '2' || pwd[i] == '3' || pwd[i] == '4' ||pwd[i] == '5' ||pwd[i] == '6' ||pwd[i] == '7' ||pwd[i] == '8' ||pwd[i] == '9' || pwd[i] == '0')
			count++;
	}
	
	if(count < 3)
		return 3;
		
		
	bool temdegt = false;
	for(int i = 0; i < strlen(pwd); i++){
		if(pwd[i] == '?' || pwd[i] == '!' || pwd[i] == '$' || pwd[i] == ' ' || pwd[i] == '*' || pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+'){
			temdegt = true;
			break;
		}
	}
	if(!temdegt)
		return 4;
		
	
}

