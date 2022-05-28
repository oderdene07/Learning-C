#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	int n = 0, m = 0, k, l, times = 0;
	int len = strlen(s2);

    while(s1[n] != '\0'){
		if(s1[n] == s2[m]){
	        k = n;
			while(s1[n] == s2[m]  && s1[n] !='\0'){
	        	n++;
	            m++;
	        }
			l = n;
			if(m == len && (s1[n] == ' ' || s1[n] == '\0')){
				times++;
	        }
      	}else{
	        while(s1[n] != ' '){
	            n++;
	            if(s1[n] == '\0')
	            break;
	        }
      	}
      	n++;
      	m=0;
    }

    if(times > 0){
    	printf("%d-%d dahi bairshil deer baina", k+1, l);
    }else{
    	printf("-1");
    }

}
