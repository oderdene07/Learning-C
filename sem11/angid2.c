#include <stdio.h>
#include <math.h>

struct Point{
	int x ,y;
};

double distance(Point a, Point b);

int main(){
	struct Point a, b;
	int i, p, x, y;
	float c;
	
	printf("1dh tsegiin koordinat x, y:\n");
	scanf("%d %d", &a.x,  &a.y);
	printf("2dh tsegiin koordinat x, y:\n");
	scanf("%d %d", &b.x,  &b.y);
	
	c = distance(a , b);
	printf("%.2f", c);
	
	return 0;
}
   
double distance(Point a, Point b){
	double d;
	d = sqrt (pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
	return d;
}
