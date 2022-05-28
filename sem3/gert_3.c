#include<stdio.h>					
int main()
{
	float a, b, d, e, f;
	int c;
	
	printf("Huis songono uu: \n");
	printf("1. Er\n");
	printf("2. Em\n");
	scanf("%d", &c);
	printf("Undur oruulna uu: \n");
	scanf("%f", &a);
	printf("Jin oruulna uu: \n");
	scanf("%f", &b);
	d = (b - 52) / 1.9;
	e = (a - 150) / 2.5;
	f = (b - 49) / 1.7;
	if (c == 1)
	{	
		if(d == e)
		{
			printf("Heviin jin");
		}
		else if ((b - 52) / 1.9 > (a - 150) / 2.5)
		{
			printf("Jingiin iluudeltei");
		}
		else
			printf("Jingiin dutagdaltai");
	}
	else if (c == 2)
	{
		if(e == f)
		{
			printf("Heviin jin");
		}
		else if ((b - 49) / 1.7 > (a - 150) / 2.5)
		{
			printf("Jingiin iluudeltei");
		}
		else 
			printf("Jingiin dutagdaltai");	
	}
}

