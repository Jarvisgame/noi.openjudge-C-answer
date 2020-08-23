#include<stdio.h>

int main()
{
	int x, y;
	double s;
	scanf("%d %d", &x, &y);
	s = (double)x / y;
	printf("%.9lf", s);
	return 0;
}