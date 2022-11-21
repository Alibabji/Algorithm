//https://www.acmicpc.net/problem/2480

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, sanggum;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && b == c) sanggum = 10000 + a * 1000;
	else if (a == b || a == c || b == c)
	{
		if (a == b||a==c) sanggum = 1000 + a * 100;
		else sanggum = 1000 + c * 100;
	}
	else
	{
		if (a > b && a > c)sanggum = a * 100;
		else if (b > a && b > c)sanggum = b * 100;
		else sanggum = c * 100;
	}
	printf("%d", sanggum);
}