#include <stdio.h>

struct Student {
	char fname[20], lname[20], id[10];
	float gpa;
};
typedef struct Student Student ;
void read(Student a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d oyutanii Neriig oruulna uu: ", i+1);
		gets(a[i].fname);
		gets(a[i].fname);
		printf("%d oyutanii ovogiig oruulna uu: ", i+1);
		gets(a[i].lname);
		printf("%d oyutanii IDg oruulna uu: ", i+1);
		gets(a[i].id);
		printf("%d oyutanii golchiig oruulna uu: ", i+1);
		scanf("%f", &a[i].gpa);
	}	
}
void print(Student a[], int n){
	for(int i = 0; i < n; i++){
		printf("\n%d oyutanii Ner: ", i+1);
		puts(a[i].fname);
		printf("%d oyutanii ovog: ", i+1);
		puts(a[i].lname);
		printf("%d oyutanii ID: ", i+1);
		puts(a[i].id);
		printf("%d oyutanii golch: ", i+1);
		printf("%.2f\n", a[i].gpa);
	}
}
void student_write(Student a[], int n, char fname[]){
	FILE *fp;
	fp = fopen(fname, "wb");
	for(int i = 0; i < n; i++){
		fprintf(fp, "%d dahi oyutan\n", i+1);
	    fprintf(fp, "Ner: %s\n", a[i].fname);
	    fprintf(fp, "Ovog: %s\n", a[i].lname);
	    fprintf(fp, "ID: %s\n", a[i].id);
	    fprintf(fp, "GPA: %.2f\n\n", a[i].gpa);
	}
    fclose(fp);
}
int student_read(Student a[], char fname[]){
	FILE *fp;
	char str[100];
	fp = fopen(fname, "rb");
	while (fgets(str, 100, fp) != NULL)
        printf("%s", str);
}
int main (){
	Student a[100], b[100];
	int n, m;
	printf("Heden oyutanii medeelel oruulah ve: ");
	scanf ("%d", &n);
	read(a, n);
	print(a, n);
	student_write(a, n, "info.dat") ;
	m = student_read(b, "info.dat") ;
	print(b, m) ;
	return 0;
}
