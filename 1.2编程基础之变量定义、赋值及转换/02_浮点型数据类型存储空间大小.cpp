#include<stdio.h>
int main()
{
	float a = 1;
	double b = 2;
	int c, d;
	c = sizeof a;
	d = sizeof b;
	printf("%d %d", c, d);
	return 0;
}