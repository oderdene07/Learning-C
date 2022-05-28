#include <stdio.h>
#include <math.h>

struct Triangle{
	int a ,b ,c;
};

int main(){
	struct Triangle v1, v2;
	float s, s1, p, p1;

	printf("1dh gurwaljnii a, b, c tal:\n");
	scanf("%d %d %d", &v1.a,  &v1.b,  &v1.c);
	printf("2dh gurwaljnii a, b, c tal:\n");
	scanf("%d %d %d", &v2.a,  &v2.b,  &v2.c);

	p = (v1.a + v1.b + v1.c) / 2;
	s= sqrt (p * (p - v1.a) * (p - v1.b) * (p - v1.c));
	p1 = (v2.a + v2.b + v2.c) / 2;
	s1 = sqrt (p1 * (p1 - v2.a) * (p1 - v2.b) * (p1 - v2.c));

	if(s1 < s)
		printf("1dh gurwaljin tom");
	else
		printf("2dh gurwaljin tom");

   return 0;
}
