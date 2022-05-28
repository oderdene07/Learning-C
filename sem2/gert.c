#include<stdio.h>					// stdio.h.h gesen sang duudaj bn
int main(){							//main gesen funkts dotor programaa ehluulj bn
	int a, b, c, d, e;
	
	scanf("%d", &a);				// garaas a toog avna
	
	b = a / 100;					//a toog 100-d huvaaj garsan hariug b-d onoon
	c = a % 10 * 10;				//a toog 10-d huvaaj uldegdeliig 10 aar urjin c-d onoon
	d = a % 100 / 10;				//a toog 100-d huvaaj uldegdeliig 10-d huvaana
	e = c + d;						//garsan c,d iig nemen e-d onoon
	if(b == e){						//herev b=e bol doorh uildeliig hiine
		printf("1");				// 1 gej hevlene
	}else{							//if dotorh nuhtsul bielehgui ued doorh uildeliig hiine
		printf("0");				// 0 gej hevlene
	}

} 
