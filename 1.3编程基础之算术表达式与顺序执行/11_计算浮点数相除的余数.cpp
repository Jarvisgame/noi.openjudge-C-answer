#include<stdio.h>

int main()
{
	double a, b, m;
	int n;
	scanf("%lf %lf", &a, &b);
	m = a / b;
	n = a / b;
	m = m - n;
	m = m * b;
	printf("%g", m);
	return 0;
}