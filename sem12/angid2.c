#include <stdio.h>

typedef struct Date Date;
struct Date{
	int d, m, y;
}a[100];

void read(int n){
	for(int i = 0; i < n; i++){
		printf("%d-p On sar udur: \n",i+1);
		printf("On: ");
	    	scanf("%d", &a[i].y);
	    printf("Sar: ");
	    	scanf("%d", &a[i].m);
	    printf("Udur: ");
	    	scanf("%d", &a[i].d);
	}
}

void print(int n){
	for(int i = 0; i < n; i++){
		printf("%d/", a[i].y);
		if(a[i].m < 10) 
			printf("0%d/", a[i].m);
		else 
			printf("%d/", a[i].m);	
		if(a[i].d < 10) 
			printf("0%d\n", a[i].d);
		else 
			printf("%d\n", a[i].d);
	}
}

int main(){
	int n;
	printf("Heden shirheg ognoo oluulah ve?\n");
	scanf("%d", &n);
	read(n);
	print(n);
}

