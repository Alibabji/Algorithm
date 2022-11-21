//https://www.acmicpc.net/problem/5597

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0, a[28], b[30], c = 0;;
	for (i = 0; i < 30; i++)
		b[i] = i + 1;
	for (i = 0; i < 28; i++)
	{
		scanf("%d", &a[i]);
		b[a[i]-1] = 0;
	}
	for (i = 0; i < 30; i++)
	{
		if (b[i] != 0)
		{
			printf("%d\n", b[i]);
			c++;
		}
		if (c == 2) break;
	}
	return 0;
}