#include<stdio.h>
#include<string.h>
int main(){
	char o[100];
	char n[100];
	char t[100];
	char nas[100];
	char u[100];
	char c[100];
	char h[100];
	
	printf("Tanii ovog: "); 
    gets(o);
    printf("Tanii ner: ");
    gets(n);
	printf("Tanii tursun on sar udur: "); 
    gets(t);
    printf("Tanii nas: "); 
    gets(nas);
    printf("Tanii durtai ungu: ");
    gets(u);
    printf("Ta chuluut tsagaaraa yu hiideg ve?: ");
    gets(c);
    printf("Tanii hobby: "); 
    gets(h);
    
    
    printf("\n%s ovogtoi %s ni %s udur tursun. Odoo %s nastai. Tuunii durtai ungu bol %s. Ter chuluut tsagaraa %s hiideg. Tuunii hobby bol %s",o,n,t,nas,u,c,h); 
    
    
    return(0);
}
