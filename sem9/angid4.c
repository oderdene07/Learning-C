#include <stdio.h> 
   
int minimum(int a, int b, int c, int d, int e);
int minimumm(int m, int n);
 
int main() { 

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
    printf("%d ni hamgiin baga too", minimum(a, b, c, d, e)); 
  
    return 0; 
} 

int minimum(int a, int b, int c, int d, int e){
    int k, l; 
	int min= a;
	k = minimumm(b, c);
	l = minimumm(d, e);
	if(a < k && a < l){
		return a;
	}else if(k < a && k < l){
		return k;
	}else{
		return l;
	}

    
}

int minimumm(int m, int n){
	if(n < m)
		return n;
	else
		return m;
}
