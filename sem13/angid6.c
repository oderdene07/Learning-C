#include<stdio.h>
#include <string.h>
struct Student{
	char fname [20], lname[20], id[10];
	float golch;
};
void read(struct Student *s){
	printf("oyutanii Neriig oruulna uu: ");
	gets(s->fname);
	printf("oyutanii ovogiig oruulna uu: ");
	gets(s->lname);
	printf("oyutanii IDg oruulna uu: ");
	gets(s->id);
	printf("oyutanii golchiig oruulna uu: ");
	scanf("%f", &s->golch);	
}

void print(struct Student s){
	printf("\noyutanii Ner: ");
	puts(s.fname);
	printf("oyutanii ovog: ");
	puts(s.lname);
	printf("oyutanii ID: ");
	puts(s.id);
	printf("oyutanii golch: ");
	printf("%.2f\n", s.golch);
}
void set_fname(struct Student *p, char ner[]){
	strcpy(p->fname, ner);
}

void set_lname(struct Student *p, char ovog[]){
	strcpy(p->lname, ovog);
}

void set_id(struct Student *p, char id[]){
	strcpy(p->id, id);
}

void set_golch(struct Student *p, float golch){
	p->golch = golch;
}

int main(){
	struct Student bat, t;
	read(&bat);
	print(bat) ;
	set_fname(&t, "Dorj ");
	set_lname(&t, "Bold ");
	set_id(&t, "1324 ");
	set_golch(&t, 3);
	print(t);
	return 0;
}





