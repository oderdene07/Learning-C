#include<stdio.h>

struct Rational {
	int d, n;
};
typedef struct Rational Rational;

Rational add(const Rational *a, const Rational *b){
	Rational *c;
	c->n = a->n * b->n;
	c->d = a->n * b->d + b->n * a->d;
	return *c;
}
Rational sub(const Rational *a, const Rational *b){
	Rational *c;
	c->n = a->n * b->n;
	c->d = b->n * a->d - a->n * b->d;
	return *c;
}
Rational mult (const Rational *a, const Rational *b){
	Rational *c;
	c->n = a->n * b->n;
	c->d = a->d * b->d;
	return *c;
}
Rational div(const Rational *a, const Rational *b){
	Rational *c;
	c->n = a->n * b->d;
	c->d = a->d * b->n;
	return *c;
}

void simplify (Rational *a){
	int m, n, t; 
	if(a->d % a->n == 0){
		a->d = a->d / a->n;
		printf("%d\n", a->d);
	}else if(a->d < 0){
		a->d = a->d * (-1);
		m = a->d;
		n = a->n;
		while( n > 0){ 
			t = m % n; 
			m = n; 
			n = t;
		}
		if(a->d < a->n){
			a->d = a->d / m *(-1);
			a->n = a->n / m;
			printf("%d/%d", a->d, a->n);
		}else{
			int buhel, uldegdel;
			a->d = a->d / m;
			a->n = a->n / m;
			buhel = a->d / a->n;
			uldegdel = a->d % a->n * (-1);
			printf("%d buhel %d/%d\n", buhel, uldegdel, a->n);
		}
	}else{
		m= a->d;
		n = a->n;
		while( n > 0){ 
			t = m % n; 
			m = n; 
			n = t;
		}
		if(a->d < a->n){
			a->d = a->d / m;
			a->n = a->n / m;
			printf("%d/%d", a->d, a->n);
		}else{
			int buhel, uldegdel;
			a->d = a->d / m;
			a->n = a->n / m;
			buhel = a->d / a->n;
			uldegdel = a->d % a->n;
			printf("%d buhel %d/%d\n", buhel, uldegdel, a->n);
		}
	}
}
void read (Rational *a){
	printf("Huvaagdagch: ");
	scanf("%d", &a->d);
	printf("Huvaagch: ");
	scanf("%d", &a->n);
}
void print (Rational *a){
	printf("%d/%d", a->d, a->n);
}
 
int main(){
	struct Rational a, b, c;
	
	read(&a);
	read(&b);
	
	printf("Tanii oruulsan 1dh butarhai:\n");
	print(&a);
	printf("\nTanii oruulsan 2dh butarhai:\n");
	print(&b);
	
	printf("\nNiilber:\n");
	c = add(&a, &b);
	print(&c);

	printf("\nYalgavar:\n");
	c = sub(&a, &b);
	print(&c);
	
	printf("\nUrjver:\n");
	c = mult(&a, &b);
	print(&c);
	
	printf("\nNoogvor:\n");
	c = div(&a, &b);
	print(&c);
	
	printf("\n1-dh butarhaig huraasan n:\n");
	simplify(&a);
	printf("\n2-dh butarhaig huraasan n:\n");
	simplify(&b);
}


