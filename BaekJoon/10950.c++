//https://www.acmicpc.net/problem/10950

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0, t, b, c, d[100000];;
	scanf("%d", &t);
	while (a < t)
	{
		scanf("%d %d", &b, &c);
		d[a] = b + c;
		a++;
	}
	a = 0;
	while (a < t)
	{
		printf("%d\n", d[a]);
		a++;
	}
	return 0;
}