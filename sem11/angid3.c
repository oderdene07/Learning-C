#include <stdio.h>
#include <math.h>

struct Triangle{
	int a ,b ,c;
};

double find_area(Triangle g);

int main(){
	float e, f;
	struct Triangle g1, g2;
	
	printf("1dh gurwaljnii a, b, c tal:\n");
	scanf("%d %d %d", &g1.a,  &g1.b,  &g1.c);
	printf("2dh gurwaljnii a, b, c tal:\n");
	scanf("%d %d %d", &g2.a,  &g2.b,  &g2.c);
	
	e = find_area(g1);
	f = find_area(g2);
	
	if(e > f)
		printf("1dh gurwaljin tom");
	else
		printf("2dh gurwaljin tom");

   return 0;
}

double find_area(Triangle g){
	float p, s;
	p = (g.a + g.b + g.c) / 2;
	s= sqrt (p * (p - g.a) * (p - g.b) * (p - g.c));
}
