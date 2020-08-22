#include<stdio.h>
int main()
{
	int a = 1;
	short int b = 2;
	int c, d;
	c = sizeof a;
	d = sizeof b;
	printf("%d %d", c, d);
	return 0;
}