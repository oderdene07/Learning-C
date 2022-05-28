#include <stdio.h>

struct Rational {
	int d, n;
};

typedef struct Rational Rational ;
Rational add( Rational a, Rational b);
Rational sub( Rational a, Rational b);
Rational mult ( Rational a, Rational b);
Rational div ( Rational a, Rational b);
Rational simplify( Rational a);
void print (Rational a); 

int main(){
	Rational a, b;
	printf("1r toog oruulna uu: ");
	scanf("%d %d", &a.d, &a.n);

	printf("2r toog oruulna uu: ");
	scanf("%d %d", &b.d, &b.n);
	
	printf("1r too: ");
	print(a);
	printf("2r too: ");
	print(b);
	printf("Niilber: ");
	add(a, b);
	printf("Yalgvar: ");
	sub(a, b);
	printf("Urjver: ");
	mult(a, b);
	printf("Noogdvor: ");
	div(a,b);
	printf("1r toonii emhtegsen baidal: ");
	simplify(a);
	printf("2r toonii emhtegsen baidal: ");
	simplify(b);
}

void print(Rational a){
	printf("%d/%d\n", a.d, a.n);
}

Rational add(Rational a, Rational b){
	a.d = a.d * b.n;
	b.d = b.d * a.n;
	a.n = a.n * b.n;
	a.d = a.d + b.d;
	
	print(a);
	simplify(a);
}

Rational sub(Rational a, Rational b){
	a.d = a.d * b.n;
	b.d = b.d * a.n;
	a.n = a.n * b.n;
	a.d = a.d - b.d;
	
	print(a);
	simplify(a);
}
Rational mult(Rational a, Rational b){
	a.d = a.d * b.d;
	a.n = a.n * b.n;
	
	print(a);
	simplify(a);
}
Rational div(Rational a, Rational b){
	a.d = a.d * b.n;
	a.n = a.n * b.d;
	
	print(a);
	simplify(a);
}
Rational simplify( Rational a){
	int m, n, t; 
	if(a.d % a.n == 0){
		a.d = a.d / a.n;
		printf("%d\n", a.d);
	}else if(a.d < 0){
		a.d = a.d * (-1);
		m= a.d;
		n = a.n;
		while( n > 0 ){ 
			t=m%n; 
			m=n; 
			n=t;
		}
		if(a.d<a.n){
			a.d = a.d / m *(-1);
			a.n = a.n /m;
			print(a);
		}else{
			int buhel, uldegdel;
			a.d = a.d / m;
			a.n = a.n /m;
			buhel = a.d/a.n;
			uldegdel = a.d%a.n *(-1);
			printf("%d %d/%d\n", buhel, uldegdel, a.n);
		}
	}else{
		m= a.d;
		n = a.n;
		while( n > 0 ){ 
			t=m%n; 
			m=n; 
			n=t;
		}
		if(a.d<a.n){
			a.d = a.d / m;
			a.n = a.n /m;
			print(a);
		}else{
			int buhel, uldegdel;
			a.d = a.d / m;
			a.n = a.n /m;
			buhel = a.d/a.n;
			uldegdel = a.d%a.n;
			printf("%d %d/%d\n", buhel, uldegdel, a.n);
		}
	}
}

