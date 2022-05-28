#include<stdio.h>

int *search (int a[], int value, int size ){
    int found = -1;
    for(int i = 0; i < size; i++){
        if(a[i] == value){
            found = i;
            break;
        }
    }
    if(found != -1){
        return &a[found];
    }else{
        return NULL;
    }
}

void read(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d-r too: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main (){
    int a[100];
    printf("5 shirheg too oruulna uu: \n");
    read (a, 5);
    print (a, 5);
    printf("\n");
    int *p;
    p = search(a, 3, 5);
    if (p == NULL)
        printf ("Oldsongui \n") ;
    else
        printf ("%d too %d-r bairlald oldloo \n", *p, p - a + 1) ;
    return 0;
}
