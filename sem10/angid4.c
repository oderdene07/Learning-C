#include <stdio.h>



void read(int a[] , int n){
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}


void print (int a[] , int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
		printf("\n");
}



int modul(int x){
	if(x < 0)
		x = x*(-1);
	return x;
}



int sum(int a[] , int n){
	int sum = 0;
	
    for (int i = 0; i < n; i++) 
    	sum = sum + a[i]; 
  
    return sum; 
}



int avg(int a[] , int n){
	int sum = 0;
	
    for (int i = 0; i < n; i++)
       sum = sum + a[i];
 
    return sum/n;
}



int product (int a[] , int n){
	int result = 1;
   
	for (int i = 0; i < n; i++)
		result = result * a[i];
		
	return result;
}



int main(){
	int a[100], n, b[100];
	
	printf("n toonii utgiig oruul : ");
	scanf("%d", &n);
	
	read(a, n);
	printf("Tanii oruulsan daraalal : ");
	print (a, n);
	
	int mu, i;
	mu = avg(a, n);
	printf("mu-iin utga : %d\n" , mu) ;

	for (i = 0; i < n; i++)
		b[i] = modul(a[i] - mu);
	
	int alpha;
	alpha = product(b, n);
	printf("alpha-iin utga : %d\n" , alpha);

	return 0;
}






