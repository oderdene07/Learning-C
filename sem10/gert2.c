#include<stdio.h>
#include <string.h>

int check(char u[], char p[]){
	
    char user[] = "bat", pass[] = "123456";
    char user1[] = "dorj", pass1[] = "password";
    char user2[] = "bold", pass2[] = {"pass247"};
    char user3[] = "tsetsgee", pass3[] = "justinbeaber";
    
    if(strcmp(u, user)==0){
        if(strcmp(u, user)==0 && strcmp(p, pass)==0)
            return 1;
		else
            return 0;
    }
	else if(strcmp(u, user1)==0){
        if(strcmp(u,user1)==0 && strcmp(p,pass1)==0)
            return 1;
		else
	        return 0;		
    }
	else if(strcmp(u, user2)==0){
    	if(strcmp(u,user2)==0 && strcmp(p,pass2)==0)
            return 1;
        else
            return 0;
    }
	else if(strcmp(u, user3)==0){
        if(strcmp(u,user3)==0 && strcmp(p,pass3)==0)
            return 1;
        else
            return 0;
    }
    else
    	return 0;
}


int main(){
    char u[50],p[50];
    printf("Hereglegchiin neree oruulna uu: \n");
    gets(u);
    printf("Nuuts ugee oruulna uu: \n");
    gets(p);
    if(check(u, p)==1)
        printf("\nTanii oruulsan ner, nuuts ug zuv baina. \n");
	else
		printf("\nTanii oruulsan ner esvel nuuts ug buruu baina.\n");
}




