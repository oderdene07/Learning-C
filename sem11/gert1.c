#include <stdio.h>
#include <string.h>

struct Student {
	char fname[20] , lname[20] , id[10];
	float golch ;
};
typedef struct Student Student;
void read_students(Student a[], int n);
void print_students(Student a[] , int n);
int search_by_fname(Student a[] , int n, char fname[] );
int search_by_lname(Student a[] , int n, char lname[] );
int search_by_id(Student a[] , int n, char id [] );
int search_by_golch(Student a[] , int n, float golch);
void sort_by_golch(Student a[] , int n);

int main(){
	struct Student a[20];
	char fname[20], lname[20], id[20], y[1];
	float golch;
	int x;
	printf("Heden oyutanii medeelel oruulah ve: ");
	scanf("%d" , &x);
	read_students(a, x);
	print_students(a,x);
	printf("\noyutanii nereer haih: ");
	gets(fname);
	gets(fname);
	search_by_fname(a , x, fname);
	printf("\noyutanii ovogoor haih: ");
	gets(lname);
	search_by_lname(a , x, lname);
	printf("\noyutanii idgaar haih: ");
	gets(id);
	search_by_id(a , x, id);
	printf("\noyutanii golchoor haih: ");
	scanf("%f", &golch);
	search_by_golch(a , x, golch);
	printf("\nGolchoor jagsaasan baidal: \n");
	sort_by_golch(a , x);
}

void read_students(Student a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d oyutanii Neriig oruulna uu: ", i+1);
		gets(a[i].fname);
		gets(a[i].fname);
		printf("%d oyutanii ovogiig oruulna uu: ", i+1);
		gets(a[i].lname);
		printf("%d oyutanii IDg oruulna uu: ", i+1);
		gets(a[i].id);
		printf("%d oyutanii golchiig oruulna uu: ", i+1);
		scanf("%f", &a[i].golch);
	}	
}

void print_students(Student a[] , int n){
	for(int i = 0; i < n; i++){
		printf("\n%d oyutanii Ner: ", i+1);
		puts(a[i].fname);
		printf("%d oyutanii ovog: ", i+1);
		puts(a[i].lname);
		printf("%d oyutanii ID: ", i+1);
		puts(a[i].id);
		printf("%d oyutanii golch: ", i+1);
		printf("%.2f\n", a[i].golch);
	}
}
search_by_fname(Student a[] , int n, char fname[] ){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].fname, fname) == 0){
			printf("\noyutanii Ner: ");
			puts(a[i].fname);
			printf("oyutanii ovog: ");
			puts(a[i].lname);
			printf("oyutanii ID: ");
			puts(a[i].id);
			printf("oyutanii golch: ");
			printf("%.2f\n", a[i].golch);
		}
	}
}
search_by_lname(Student a[] , int n, char lname[] ){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].lname, lname) == 0){
			printf("\noyutanii Ner: ");
			puts(a[i].fname);
			printf("oyutanii ovog: ");
			puts(a[i].lname);
			printf("oyutanii ID: ");
			puts(a[i].id);
			printf("oyutanii golch: ");
			printf("%.2f\n", a[i].golch);
		}
	}
}
search_by_id(Student a[] , int n, char id[] ){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].id, id) == 0){
			printf("\noyutanii Ner: ");
			puts(a[i].fname);
			printf("oyutanii ovog: ");
			puts(a[i].lname);
			printf("oyutanii ID: ");
			puts(a[i].id);
			printf("oyutanii golch: ");
			printf("%.2f\n", a[i].golch);
		}
	}
}
search_by_golch(Student a[] , int n, float golch ){
	for(int i = 0; i < n; i++){
		if(a[i].golch == golch){
			printf("\noyutanii Ner: ");
			puts(a[i].fname);
			printf("oyutanii ovog: ");
			puts(a[i].lname);
			printf("oyutanii ID: ");
			puts(a[i].id);
			printf("oyutanii golch: ");
			printf("%.2f\n", a[i].golch);
		}
	}
}
void sort_by_golch(Student a[] , int n){
	Student temp;
	for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (a[i].golch < a[j].golch){
                temp =  a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("\noyutanii Ner: ");
		puts(a[i].fname);
		printf("oyutanii ovog: ");
		puts(a[i].lname);
		printf("oyutanii ID: ");
		puts(a[i].id);
		printf("oyutanii golch: ");
		printf("%.2f\n", a[i].golch);
    }
}
 
