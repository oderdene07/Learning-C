#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int *get_array_from_file(char fname[]){
	FILE *ner;
	ner = fopen("fname.txt", "r");
	int too = 0, temp;
	while(fscanf(ner, "%d", &temp)==1){
    	too++;
    }
	fclose(ner);
	return &too;
}
int main(){
	char fname[100];
	printf("Enehuu husnegtend %d too baina.", *get_array_from_file(fname));

}

 
