#include <stdio.h>


int main(){
    FILE *fp;
    const char *name = "student.txt";
    const char *mode = "r";
    char str[100];
    fp = fopen(name, mode);
    if (fp == NULL) {
        printf ("%s file -iig ongoilgoh bolomjgui ", name);
    }else{
        while (fgets(str, 100, fp) != NULL)
        	printf("%s", str);
    }
    fclose(fp);
}
