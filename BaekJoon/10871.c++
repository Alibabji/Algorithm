//https://www.acmicpc.net/problem/10871

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, i = 0;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &c);
		if (c < b) printf("%d ", c);
	}
	return 0;
}