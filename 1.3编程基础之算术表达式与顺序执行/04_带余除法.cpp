#include<stdio.h>

int main()
{
	int x, y, z, m;
	scanf("%d %d", &x, &y);
	m = x / y;
	z = x - m * y;
	printf("%d %d", m, z);
	return 0;

}