#include <stdio.h>
struct Student {
    char fname [20] , lname [20] , id [10];
    float gpa;
};
int main(){
    struct Student a[20];
    FILE *fp;
    const char *name = "student.txt";
    const char *mode = "w";
    int n;
    fp = fopen(name, mode);
    if (fp == NULL) {
        printf ("%s file -iig ongoilgoh bolomjgui ", name);
    }else{
        printf("Heden oyutan be: ");
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            printf("%d oyutanii Neriig oruulna uu: ", i+1);
            scanf("%s", &a[i].fname);
            printf("%d oyutanii ovogiig oruulna uu: ", i+1);
            scanf("%s", &a[i].lname);
            printf("%d oyutanii IDg oruulna uu: ", i+1);
            scanf("%s", &a[i].id);
            printf("%d oyutanii golchiig oruulna uu: ", i+1);
            scanf("%f", &a[i].gpa);

            fprintf(fp, "%d dahi oyutan\n", i+1);
            fprintf(fp, "Ner: %s\n", a[i].fname);
            fprintf(fp, "Ovog: %s\n", a[i].lname);
            fprintf(fp, "ID: %s\n", a[i].id);
            fprintf(fp, "GPA: %.2f\n\n", a[i].gpa);
        }
    }
    fclose(fp);
}
