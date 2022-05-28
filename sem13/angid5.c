#include<stdio.h>

struct triangle{
	int a, b, c;
};

void read (struct triangle *p){
	printf("a, b, c-giin utgiig oruulna uu: \n");
	printf("a-giin utga: ");
	scanf("%d", &p->a);
	printf("b-giin utga: ");
	scanf("%d", &p->b);
	printf("c-giin utga: ");
	scanf("%d", &p->c);
}
int main (){
	struct triangle g;
	read(&g);
	printf("a, b, c-giin utga: %d %d %d", g.a, g.b, g.c);
}
