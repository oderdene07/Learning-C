#include <stdio.h>

typedef struct Date Date;
struct Date{
	int d, m, y;
}a[100], t;

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

int less(Date a, Date b){
	if(b.y > a.y) 
		return 1;
	else if(b.y < a.y) 
		return 0;
	else{
		if(b.m > a.m) 
			return 1;
		else if(b.m < a.m) 
			return 0;
		else{
			if(b.d > a.d) 
				return 1;
			else if(b.d < a.d) 
				return 0;
			else 
				return 2;
		}
	}
}

void sort(int n){  								
	int k;
	for(int i = 0; i < n; i++){
		k = i;
		for(int j = i + 1; j < n; j++){
			if(a[k].y > a[j].y) 
				k = j;
			else if(a[k].y < a[j].y){
				k = k;
			}
			else{
				if(a[k].m > a[j].m) 
					k = j;
				else if(a[k].m < a[j].m){
					k = k;	
				}
				else{
					if(a[k].d>a[j].d) 
						k = j;
				} 
			}
		}
		t = a[k];
		a[k] = a[i];
		a[i] = t;
	}
}
int main(){
	int n;
	printf("Heden shirheg on sar udur oluulah ve?\n");
	scanf("%d", &n);
	read(n);
	sort(n);
	print(n);
}

