//https://www.acmicpc.net/problem/2438

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("*\n");
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}