//https://www.acmicpc.net/problem/3052

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b[42];
int main(void)
{
	int a[2][10],i=0, p = 0;
	for (; i < 10; i++)
	{
		scanf("%d", &a[0][i]);
		a[1][i] = a[0][i] % 42;
		b[a[1][i]] = 1;
	}
	for (i = 0; i < 42; i++)
	{
		if (b[i] == 1) p++;
		if (p >= 10)break;
	}
	printf("%d", p);
	return 0;
}