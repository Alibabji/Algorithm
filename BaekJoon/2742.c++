//https://www.acmicpc.net/problem/2742

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d", &a);
	b = a;
	do
	{
		printf("%d\n", b);
		b--;
	} while (b>0);
	return 0;
}