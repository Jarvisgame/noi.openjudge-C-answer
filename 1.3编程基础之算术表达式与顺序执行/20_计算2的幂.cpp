#include<stdio.h>
#include<math.h>

int main()
{
	int n, x = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		x = 2 * x;
	}
	printf("%d", x);
	return 0;
}