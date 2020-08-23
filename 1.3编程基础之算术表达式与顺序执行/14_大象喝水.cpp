#include<stdio.h>

int main()
{
	double pai = 3.14159;
	double V, h, r;
	scanf("%lf %lf", &h, &r);
	V = pai * r * r * h;
	V = V / 1000;
	int ts;
	ts = 20 / V;
	ts = ts + 1;
	printf("%d", ts);
	return 0;
}