#include <stdio.h>

int main(){
    FILE *fp, *fpo;
    const char *name = "input.txt";
    const char *mode = "r";
    const char *oname = "output.txt";
    const char *omode = "w";
    int a, b;
    fp = fopen(name, mode);
    fpo = fopen(oname, omode);
    if (fp == NULL && fpo == NULL) {
        printf ("%s esvel %s file -iig ongoilgoh bolomjgui ", name, oname);
    }else{
        fscanf(fp ,"%d", &a);
        fscanf(fp ,"%d", &b);
        fprintf(fpo, "%d", a+b);
    }
    fclose(fp);
    fclose(fpo);
}
