#include<stdio.h>

int main()
{
	double pai = 3.14;
	double r, V;
	scanf("%lf", &r);
	V = 4 * pai * r * r * r / 3;
	printf("%.2lf", V);
	return 0;
}