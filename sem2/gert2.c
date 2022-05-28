#include<stdio.h>					// stdio.h.h gesen sang duudaj bn
int main(){							//main gesen funkts dotor programaa ehluulj bn
	int a, b, c, d;
	for(a=1; a<5; a++){					//doorh uildel duushar a mun adil 1-5 hurtel guilgehdee 1-iig nemne
		for(b=1; b<5; b++){				//doorh uildel duushar b mun adil 1-5 hurtel guilgehdee 1-iig nemne
			for(c=1; c<5; c++){			//doorh uildel duushar c mun adil 1-5 hurtel guilgehdee 1-iig nemne
				for(d=1; d<5; d++){		//d-g 1-5 hurtel guilgehdee 1-iig nemne
					if(!(a==b || a==c || a==d || b==c || b==d || c==d))			// too davhtsahgui n uidnees ene muriig oruulsan jishee n 1111	
						printf("%d%d%d%d\n",a,b,c,d);		//abcd- helbereer hevlene
				}
			}
		}
	}
	
	return 0;
	}
