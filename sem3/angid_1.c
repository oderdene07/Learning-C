#include<stdio.h>					
int main(){						
	int n;
	
	scanf("%d", &n);			
	if (n % 400 == 0){							// 100-d uldegdelgui huvaagdval doorh uildeliig guitsetgene				
		printf("Undur jil mun bn");				
	}else if (n % 4 == 0 && n % 100 != 0){		//4-d uldegdelgui huvaagddag ba 100-d uldegdeltei huvaagdval doorh uildeliig guitsetgene
		printf("Undur jil mun bn");				
	}else										//busad ued
		printf("Undur jil bish bn");

} 
