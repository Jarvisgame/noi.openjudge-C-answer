#include<stdio.h>
#include<math.h>

int main()
{
	int a1, a2, n;
	double d;
	scanf("%d %d %d", &a1, &a2, &n);
	d = a2 - a1;
	int an;
	an = a1 + (n - 1) * d;
	printf("%d", an);
	return 0;
}