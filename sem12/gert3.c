#include <stdio.h>
#include <math.h>

typedef struct {
    int dim;
    float dat[100];
} Vector;

int dotProduct(Vector a, Vector b){
    int dProduct = 0;
    for(int i = 0; i < a.dim; i++){
        dProduct = dProduct + (a.dat[i] * b.dat[i]);
    }
    return dProduct;
}
float scalar_mult(Vector a, float t){
    float sMult = 0;
    for(int i = 0; i < a.dim; i++){
        sMult = sMult + (a.dat[i] * t);
    }
    return sMult;
}
int scalar_mult(Vector a, int t){
    int sMult = 0;
    for(int i = 0; i < a.dim; i++){
        sMult = sMult + ((int)a.dat[i] * t);
    }
    return sMult;
}
int len(Vector a){
    int urt = 0;
    for(int i = 0; i < a.dim; i++){
        urt = urt + pow(a.dat[i], 2);
    }
    urt = sqrt(urt);
    return urt;
}

int main(){
    Vector A,B;
    float t;

    printf("Vectoriin hemjeeg oruulna uu: ");
    scanf("%d", &A.dim);

    for(int i = 0; i < A.dim; i++){
        printf("A vectoriin %d-r gishuuniig oruulna uu: ", i+1);
        scanf("%f", &A.dat[i]);
    }

    B.dim = A.dim;

    for(int i = 0; i < B.dim; i++){
        printf("B vectoriin %d-r gishuuniig oruulna uu: ", i+1);
        scanf("%f", &B.dat[i]);
    }

    printf("Scaliar urjegdhuun ni: ");
    scanf("%f", &t);

    printf("dot Urjver ni: ");
    printf("%d\n", dotProduct(A, B));

    printf("A Vectoriin scaliar urjver float-oor: ");
    printf("%.2f\n", scalar_mult(A, t));

    printf("B Vectoriin scaliar urjver float-oor: ");
    printf("%.2f\n", scalar_mult(B, t));

    printf("A Vectoriin scaliar urjver: ");
    printf("%d\n", scalar_mult(A, (int)t));

    printf("B Vectoriin scaliar urjver: ");
    printf("%d\n", scalar_mult(B, (int)t));

    printf("A Vectoriin Urt: ");
    printf("%d\n", len(A));

    printf("B Vectoriin Urt: ");
    printf("%d\n", len(B));
}
