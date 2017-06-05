#include <stdio.h>
#include <math.h>
int add(int a, int b) {
	int res = a + b;
	return res;
}

typedef struct {
	float x;
	float y;
} point;

int main(int argc, char const *argv[])
{
	int added = add(2, 9);
	point p;
	p.x = 3;
	p.y = 4;
	float length = sqrt(p.x * p.x + p.y * p.y);

	printf("int = %d, length = %.1f \n", added, length);
	return 0;
}