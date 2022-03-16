#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int a, b, c, d,w,q;
	scanf("%d %d", &a, &b);
	w = a, q = b;
	if (a < b)
	{
		c = a, a = b, b = c;}

	begin:d = a % b;
	if (d != 0)
	{
		a = b, b = d;
		goto begin;

	}
		printf("%d和%d的最大公约数为%d", w, q, b);

	return 0;
}