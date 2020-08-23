#include<stdio.h>

int main()
{
	int x, y, z, m;
	scanf("%d", &x);
	y = x / 100;
	z = x / 10 - y * 10;
	m = x - y * 100 - z * 10;
	printf("%d%d%d", m, z, y);
	return 0;
}