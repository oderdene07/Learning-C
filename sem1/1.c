#include<math.h>							// math.h gesen sang duudaj bn
#include<stdio.h>							// stdio.h.h gesen sang duudaj bn
int main(){									//main gesen funkts dotor programaa ehluulj bn
	printf("Sain baina uu. C hel\n");		// printf funkts ashiglan "Sain baina uu. C hel" gej hevlej baina
	int x = 2020;							// x-d natural toon utga onooj bn
	int y = 9;								// y-d natural toon utga onooj bn
	int z = 3;								// z-d natural toon utga onooj bn
	int k=2000;								// k-d natural toon utga onooj bn
	int h=5;								// h-d natural toon utga onooj bn
	int i=26;								// i-d natural toon utga onooj bn
	int e,f,l,m,n;							// e,f,l,m,n gesen natural toon huvisagchuudiig zarlaj bn
	int sum,min,mul,divd;					// sum,min, mult, divd gesen natural toon huvisagchuudiig zarlaj bn
	float div; 								// div gesen butarhai toon huvisagch zarlaj bn
	float a,b,c,d,number,result;			// a,b,c,d,number,result gesen butarhai toon huvisagch zarlaj bn
	
    printf("On oruulna uu ");				//printf funkts ashiglan "On oruulna uu" gej hevlej baina
    scanf("%d", &l);						// scanf funktsiig ashiglan garaas l huvisagchd utga onooj bn
    printf("Sar oruulna uu ");				//printf funkts ashiglan "Sar oruulna uu " gej hevlej baina
    scanf("%d", &m);						// scanf funktsiig ashiglan garaas m huvisagchd utga onooj bn
    printf("udur oruulna uu ");				//printf funkts ashiglan "udur oruulna uu" gej hevlej baina
    scanf("%d", &n);						// scanf funktsiig ashiglan garaas n huvisagchd utga onooj bn
    printf("Ta %d onii %d sariin %d-nii uduriig oruulla\n",l,m,n);		//l,m,n gesen huvisagchuudiig hargalzah %d-d onooj printf funktsiig ashiglan hevlej bn
    
	printf("Unuudur %d onii %d sariin %d-nii udur\n",x,y,z);			//x,y,z gesen huvisagchuudiig hargalzah %d-d onooj printf funktsiig ashiglan hevlej bn
	printf("Bi %d onii %d sariin %d-nii udur tursun\n",k,h,i);			//k,h,i gesen huvisagchuudiig hargalzah %d-d onooj printf funktsiig ashiglan hevlej bn
	
	printf("1-r toog oruulna uu ");						//printf funkts ashiglan "1-r toog oruulna uu" gej hevlej baina
	scanf("%d",&e);										// scanf funktsiig ashiglan garaas e huvisagchd utga onooj bn
    printf("2-r toog oruulna uu ");						//printf funkts ashiglan "2-r toog oruulna uu" gej hevlej baina
    scanf("%d", &f);									// scanf funktsiig ashiglan garaas f huvisagchd utga onooj bn
    
    sum = e + f;										//sum gesen huvisagchid e,f iin niilberiig onooj bn
    min = e - f;										//min gesen huvisagchid e,f iin yalgavariig onooj bn
    mul = e * f;										//mul gesen huvisagchid e,f iin urjveriig onooj bn
    div = e / (float)f;									//f gesen natural toon huvisagchiig float buyu butarhain toon huvisagch bolgon e,f 2-iin noogdvoriig div-d onooj bn
    divd = e % f;										//divd gesen huvisagchid e,f iin uldegdeliig onooj bn
	   
    printf("Niilber %d + %d = %d\n", e, f, sum);				//printf funkts ashiglan e,f,sum huvisagchuudad %d -d onooj printf funktsiig ashiglan hevlej bn
    printf("Yalgavar %d - %d = %d\n", e, f, min);				//printf funkts ashiglan e,f,min huvisagchuudad %d -d onooj printf funktsiig ashiglan hevlej bn
    printf("Urjver %d * %d = %d\n", e, f, mul);					//printf funkts ashiglan e,f,mul huvisagchuudad %d -d onooj printf funktsiig ashiglan hevlej bn
    printf("Noogdvor %d / %d = %.2f\n",e,f, div);				//printf funkts ashiglan e,f,div huvisagchuudad %d -d onooj printf funktsiig ashiglan hevlej bn
    printf("Uldegdel %d / %d = %d\n", e, f, divd);				//printf funkts ashiglan e,f,divd huvisagchuudad %d -d onooj printf funktsiig ashiglan hevlej bn
    
	printf("a toog oruulna uu ");						//printf funkts ashiglan "a toog oruulna uu" gej hevlej baina
	scanf("%f",&a);										// scanf funktsiig ashiglan garaas a huvisagchd utga onooj bn
	printf("b toog oruulna uu ");						//printf funkts ashiglan "b toog oruulna uu" gej hevlej baina
	scanf("%f", &b);									// scanf funktsiig ashiglan garaas b huvisagchd utga onooj bn
	printf("c toog oruulna uu ");						//printf funkts ashiglan "c toog oruulna uu" gej hevlej baina
	scanf("%f",&c);										// scanf funktsiig ashiglan garaas c huvisagchd utga onooj bn
	printf("d toog oruulna uu ");						//printf funkts ashiglan "d toog oruulna uu" gej hevlej baina
	scanf("%f", &d);									// scanf funktsiig ashiglan garaas d huvisagchd utga onooj bn
	
	number=(a+b)*(a+b)+d;								//number gesen huvisagchid (a+b)*(a+b)+d ene utgiig onooj bn a=b giin kvatrat deer +d
	result = sqrt(number)/2;							//result gesen huvisagchid number gesen huvisagchiin yazguuriig 2-d huvaasan utgiig onooj bn
	printf("\nHariu = %.2f ",result);					//printf funkts ashiglan "" gej hevlej baina
	

    return 0;												
	
}
