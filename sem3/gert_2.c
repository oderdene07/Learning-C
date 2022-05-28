#include<stdio.h>					
int main()
{
	int a, b, c;					
	int year = 2020;
	int month = 9;
	int day = 16;
	printf("On oruulna uu: ");
	scanf("%d", &a);
	printf("Sar oruulna uu: ");
	scanf("%d", &b);
	printf("Udur oruulna uu: ");
	scanf("%d", &c);
	if(a > year){										// on ni ireedui mun esehiig shalgaj bn			
		printf("Ireedui");
	}else if(a >= year && b > month){					// on ih ba tentsuu ued sar ni ireedui mun esehiig shalgaj bn
		printf("Ireedui");
	}else if(a >= year && b >= month && c > day){		// on, sar ih ba tentsuu ued udur ni ireedui mun esehiig shalgaj bn
		printf("Ireedui");
	}
	else
		printf("Ungursun");								// busad ued ungursun bolno
	
}
