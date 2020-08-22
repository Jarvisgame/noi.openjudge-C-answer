#include<stdio.h>
int main()
{
	bool a = 1;
	char b = 2;
	int c, d;
	c = sizeof a;
	d = sizeof b;
	printf("%d %d", c, d);
	return 0;
}