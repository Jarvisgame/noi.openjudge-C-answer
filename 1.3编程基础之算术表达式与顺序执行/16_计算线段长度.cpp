#include<stdio.h>
#include<math.h>

int main()
{
	double Xa, Ya, Xb, Yb;
	scanf("%lf %lf", &Xa, &Ya);
	scanf("%lf %lf", &Xb, &Yb);
	double L;
	L = (Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb);
	L = sqrt(L);
	printf("%.3lf", L);
	return 0;
}