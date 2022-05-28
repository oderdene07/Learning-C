#include<stdio.h>					
int main()
{																				// bagshaa ene bodlogiig mun gert_3-iig  lab orhoor tanid bieree tailbarlaj boloh uu?
	int a,b,c,d,e,f,g,h,i,k,l,m;
	printf("Shultei ustai hool ideh uu?\n");
	printf("1. Tiim\n");
	printf("2. Ugui\n");
	scanf("%d", &a);
	if(a==1)
	{
		printf("Tsaitai bol tiim, ugui bol shultei baih ni\n");
		printf("1. Tiim\n");
		printf("2. Ugui\n");
		scanf("%d", &b);
		if (b==1)
		{
			printf("Budaatai bol tiim, ugui bol banshtai baih ni\n");
			printf("1. Tiim\n");
			printf("2. Ugui\n");	
			scanf("%d", &c);
			if(c==1)
			{
				printf("Tanii zahialsan hool Budaatai tsai\n");	
			}else
				printf("Tanii zahialsan hool Banshtai tsai\n");
		}
		else if(b==2)
		{
			printf("Yutai shul idmeer baina?\n");
			printf("1. Lapsha\n");
			printf("2. Huitsai\n");
			printf("3. Goimontoi shul\n");
			printf("4. Banshtai shul\n");
			printf("5. Har shul\n");
			printf("6. Nogootoi shul\n");
			scanf("%d", &d);
			if(d==1)
			{
				printf("Tanii zahialsan hool Lapsha\n");
			}
			else if(d==2)
			{
				printf("Tanii zahialsan hool Huitsai\n");
			}
			else if(d==3)
			{
				printf("Tanii zahialsan hool Goimontoi shul\n");
			}	
			else if(d==4)
			{
				printf("Tanii zahialsan hool Banshtai shul\n");
			}
			else if(d==5)
			{
				printf("Tanii zahialsan hool Har shul\n");
			}
			else if(d==6)
			{
				printf("Tanii zahialsan hool Nogootoi shul\n");
			}		
		}
	}
	else if(a==2)
	{
		printf("Mah ni tatsan uu?\n");
		printf("1. Tiim\n");
		printf("2. Ugui\n");
		scanf("%d", &e);
		if(e==1)
		{
			printf("Guriland orooson uu?\n");
			printf("1. Tiim\n");
			printf("2. Ugui\n");
			scanf("%d", &f);
			if(f==1)
			{
				printf("Yaj bolgoson?\n");
				printf("1. Sharsan\n");
				printf("2. Jignesen\n");
				scanf("%d", &g);
				if(g==1)
				{
					printf("Yaj sharsan?\n");
					printf("1. Piroshki\n");
					printf("2. Huushur\n");
					scanf("%d", &h);
					if(h==1)
					{
						printf("Tanii zahialsan hool Piroshki\n");
					}
					else
						printf("Tanii zahialsan hool Huushur\n");
				}
				if(g==2)
				{
					printf("Yaj jignesen?\n");
					printf("1. Huulgun jignesen\n");
					printf("2. shuud jignesen\n");
					scanf("%d", &m);
					if(m==1)
					{
						printf("Tanii zahialsan hool Mantuun buuz\n");
					}
					else
						printf("Tanii zahialsan hool Buuz\n");
				}
			}
			else if(f==2)
			{
				printf("Budaatai yu?\n");
				printf("1. Undugund orooson\n");
				printf("2. Mahaa buurunhiilsun\n");
				scanf("%d", &i);
			}
					if(i==1)
					{
						printf("Tanii zahialsan hool Undugtei Pivshteks\n");
					}
					else if(i==2)
					{
						printf("Tanii zahialsan hool Tefteli\n");
					}
		}
		
		else if(e==2)
		{
			printf("Yutai holison\n");
			printf("1. Guriltai\n");
			printf("2. Undugtei\n");
			printf("3. Budaatai\n");
			printf("4. Nogootoi\n");
			scanf("%d", &k);
				if(k==1)
				{
					printf("Tanii zahialsan hool Tsuivan\n");
				}
				else if(k==2)
				{
					printf("Tanii zahialsan hool Undugtei huurga\n");
				}
				else if(k==3)
				{
					printf("Hoorond ni holih uu?\n");
					printf("1. Tiim\n");
					printf("2. Ugui\n");
					scanf("%d", &l);
						if(l==1)
						{
							printf("Tanii zahialsan hool Budaatai huurga\n");
						}
						else
							printf("Tanii zahialsan hool Guliash\n");
				}
				else if(k==4)
				{
					printf("Tanii zahialsan hool Nogootoi huurga\n");
				}
		}
	}
}
