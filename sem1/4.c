#include<math.h>
#include<stdio.h>
int main(){ 
	double a,b,c,d,n1,n2,result;	

	printf("a toog oruulna uu ");
	scanf("%lf",&a);
	printf("b toog oruulna uu ");
	scanf("%lf", &b);
	printf("c toog oruulna uu ");
	scanf("%lf",&c);
	printf("d toog oruulna uu ");
	scanf("%lf", &d);
	
	n1=(pow(a,3)+b/c)*(pow(a,3)+b/c)+d;  // n1 huvisagchid bodlogonii ehnii hesgiin tegshitgeliin utgiig onooj ugj bn
	n2=(sqrt(n1));						 // n2 huvisagchid n1 iin yazguuriin utgiig onooj bn
	result = n2/(d*d-(a*b/c))*d;		 // result huvisagchid bodlogonii daraagiin hesgiin tegshitgeliin utgiig onooj ugj bn
	
	
	printf("\nHariu = %.2f ",result);
	
	return 0;
}
