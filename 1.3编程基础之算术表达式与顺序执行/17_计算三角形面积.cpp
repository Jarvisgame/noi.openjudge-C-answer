#include<stdio.h>
#include<math.h>

int main()
{
	double Xa, Ya, Xb, Yb, Xc, Yc;
	scanf("%lf %lf %lf %lf %lf %lf", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);
	double L1, L2, L3;
	L1 = (Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb);
	L1 = sqrt(L1);
	L2 = (Xc - Xb) * (Xc - Xb) + (Yc - Yb) * (Yc - Yb);
	L2 = sqrt(L2);
	L3 = (Xa - Xc) * (Xa - Xc) + (Ya - Yc) * (Ya - Yc);
	L3 = sqrt(L3);
	double p, s;
	p = (L1 + L2 + L3) / 2;
	s = p * (p - L1) * (p - L2) * (p - L3);
	s = sqrt(s);
	printf("%.2lf", s);
	return 0;
}