#include <math.h>						
#include <stdio.h>
int main() {
    double a, b, c, d, x1, x2;
    printf("a-g oruulna uu: ");
    scanf("%lf", &a);
    printf("b-g oruulna uu: ");
    scanf("%lf",&b);
    printf("c-g oruulna uu: ");
    scanf("%lf",&c);

    d = b * b - 4 * a * c;			//tegshtgeliin diskriminantiig olj bn

    if (d > 0) {					//nuhtsul shalgah funkts ashiglan diskriminantiig 0 ees ih uyed hiih uildel
        x1 = (-b + sqrt(d)) / (2 * a);		// x1 iig olj bn
        x2 = (-b - sqrt(d)) / (2 * a);		//x2 iig olj bn
        printf("x1 = %.2lf , x2 = %.2lf", x1, x2);
    }

    else if (d == 0) {				//nuhtsul shalgah funkts ashiglan diskriminantiig 0 tei = uyed hiih uildel
        x1 =x2 = -b / (2 * a);      //x1=x2 bolhor 1 shiidtei
        printf("x1 = x2 = %.2lf;", x1);
    }

    else {									//nuhtsul shalgah funkts ashiglan diskriminant 0 ees baga uyed hiih uildel
        printf("Shiidgui bodlogo baina");	
    }

    return 0;
} 
