#include<stdio.h>

struct Date {
	int d, m, y;
};

int Day_Diff( Date a, Date b){
	int s = 0, i;
	if(a.y < b.y)
		s = s + (b.y - a.y) * 365;
	if(a.m < b.m){
		for(i = a.m; i < b.m; i++){
			if(i == 4 || i == 6 || i == 9 || i == 11)
				s = s + 30;
			else if(i == 2)
				s = s + 28;
			else
				s = s + 31;
		}
	}
	else if(a.m > b.m){
		for(i = b.m; i < a.m; i++){
			if(i == 4 || i == 6 || i == 9 || i == 11)
				s = s - 30;
			else if(i == 2)
				s = s - 28;
			else
				s = s - 31;
		}
	}
	s = s + (b.d - a.d);
	
	return s;
}
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
int main(){
	Date a, b;
	a = read(a);
	b = read(b);
	printf("%d - udriin daraa Naadam bolno", Day_Diff(a,b));
	return 0;
}

