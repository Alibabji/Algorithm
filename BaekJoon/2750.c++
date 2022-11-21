//https://www.acmicpc.net/problem/2750

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, i;
	scanf("%d", &a);
	int b[1000];
	for (i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int j = 0; j < a; j++)
	{
		for (i = 1; i<a; i++)
		{
			int c;
			if (b[i] < b[i - 1])
			{
				c = b[i - 1];
				b[i - 1] = b[i];
				b[i] = c;
			}
		}
	}
	for (i = 0; i < a; i++)
	{
		printf("%d \n", b[i]);
	}
}