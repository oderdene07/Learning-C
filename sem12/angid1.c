#include<stdio.h>

typedef struct {
    int d, m, y;
} Date;


Date read(Date dt){
    printf("On sar udur oruulna uu: \n");
    printf("On: ");
    	scanf("%d", &dt.y);
    printf("Sar: ");
    	scanf("%d", &dt.m);
    printf("Udur: ");
    	scanf("%d", &dt.d);
    
    return dt;
}

void print(Date dt){
    printf("%d/", dt.y);
	if(dt.m < 10) 
		printf("0%d/", dt.m);
	else 
		printf("%d/", dt.m);	
	if(dt.d < 10) 
		printf("0%d\n", dt.d);
	else 
		printf("%d\n", dt.d);
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

int main(){
    Date a, b;
    int c;
    a = read(a);
    b = read(b);
    print(a);
    print(b);
    c = less(a, b);
    if(c == 2) 
        printf("Adilhan udur oruulsan bn");
    else 
        printf("%d", c);
}
