#include<stdio.h>

int main()
{
	double r, d, c, s;
	scanf("%lf", &r);
	double pai = 3.14159;
	d = 2 * r;
	c = 2 * pai * r;
	s = pai * r * r;
	printf("%.4lf %.4lf %.4lf", d, c, s);
	return 0;
}