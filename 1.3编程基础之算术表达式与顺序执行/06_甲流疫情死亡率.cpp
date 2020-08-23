#include<stdio.h>

int main()
{
	int x, y;
	double s;
	scanf("%d %d", &x, &y);
	y = y * 100;
	s = (double)y / x;
	printf("%.3lf%%", s);
	return 0;
}