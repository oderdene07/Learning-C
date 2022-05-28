#include<stdio.h>
#include<math.h>					
int main(){							
	int a,b,c,d,e,f, G1, G2, G3;
	printf("x1,y1 iig oruulna uu:");
	scanf("%d %d", &a,&b);
	printf("x2,y2 iig oruulna uu:");					//x,y iin too n baga baih tusam 0, 0 tsegtei oir bairlana
	scanf("%d %d", &c,&d);
	printf("x3,y3 iig oruulna uu:");
	scanf("%d %d", &e,&f);	
	
	G1 = sqrt(a*a+b*b);
	G2 = sqrt(c*c+d*d);
	G3 = sqrt(e*e+f*f);
	
	
	
			
	if (G1 < G2 && G1 < G3){				//herev a, b 2-n hamgiin baga baival doorh uildeliig guitsetgene 	
		printf("x1,y1 hamgiin oir\n");				
    }else if (G2 < G1 && G2 < G3){				//herev c, d 2-n hamgiin baga baival doorh uildeliig guitsetgene
		printf("x2,y2 hamgiin oir\n");
	}else if(G3 < G1 && G3 < G2){				//herev e, f 2-n hamgiin baga baival doorh uildeliig guitsetgene
		printf("x3,y3 hamgiin oir\n");
	}
	if (G1 > G2 && G1 > G3){				//herev a, b 2-n hamgiin ih baival doorh uildeliig guitsetgene
		printf("x1,y1 hamgiin hol\n");				
    }else if (G2 > G1 && G2 > G3){				//herev c, d 2-n hamgiin ih baival doorh uildeliig guitsetgene
		printf("x2,y2 hamgiin hol\n");
	}else if(G3 > G1 && G3 > G2){				//herev e, f 2-n hamgiin ih baival doorh uildeliig guitsetgene
		printf("x3,y3 hamgiin hol\n");
	} 
}
