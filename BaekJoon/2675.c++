//https://www.acmicpc.net/problem/2675

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, d = 0;
	char c[20];
	scanf("%d", &a);
	for (; a > 0; a--)
	{
		scanf("%d %s",&b, c);
		while (1)
		{
			if (c[d] == '\0') break;
			d++;
		}
		int e = 0;
		for (; d > 0; d--)
		{
			for (int f=b; f > 0; f--)
			{
				printf("%c", c[e]);
			}
			e++;
		}
		printf("\n");
	}
	return 0;
}