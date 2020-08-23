#include<stdio.h>

int main()
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	int chi = 0;
	while (y > 0)
	{
		y = y - x;
		chi++;
	}
	int sheng;
	sheng = n - chi;
	printf("%d", sheng);
	return 0;
}