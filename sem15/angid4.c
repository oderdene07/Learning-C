#include <stdio.h>

int main(){
    FILE *fp;
    const char *name = "input1.txt";
    const char *mode = "r";
    int a, n, sum = 0;
    fp = fopen(name, mode);
    if (fp == NULL){
        printf ("%s file -iig ongoilgoh bolomjgui ", name);
    }else{
        fscanf(fp ,"%d", &n);
        for(int i = 0; i < n; i++){
            fscanf(fp, "%d", &a);
            sum = sum + a;
        }
    }
    printf("%d", sum);
    fclose(fp);
}
