#include <stdio.h>
#include <math.h>

struct point{
	int x, y;
};

float diff_point(point n, point m){
	return sqrt(pow((n.x - m.x), 2) + pow((n.y - m.y), 2));
}

struct triangle{
	float a, b, c;
}; 

float find_area(float a, float b, float c){
  float s, area;

  s = (a + b + c) / 2;

  area = sqrt(s * (s - a) * (s - b) * (s - c));

  return area;
}

int main(){
    point A,B,C;
    printf("1. Gurvaljingiin tseguudiig oruulna uu: ");
    scanf("%d %d", &A.x, &A.y);
    printf("2. Gurvaljingiin tseguudiig oruulna uu: ");
    scanf("%d %d", &B.x, &B.y);
    printf("3. Gurvaljingiin tseguudiig oruulna uu: ");
    scanf("%d %d", &C.x, &C.y);
    triangle t;
    t.a = diff_point(A, B);
    t.b = diff_point(B, C);
    t.c = diff_point(C, A);
    float area;
    area = find_area(t.a, t.b, t.c);
    printf("Gurvaljinii talbai = %.2f", area);
}

