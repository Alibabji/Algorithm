//https://www.acmicpc.net/problem/2953

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[5][4], b[6] = { 0, }, c;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
			b[i] += a[i][j];
		}
		if (b[i] > b[5])
		{
			b[5] = b[i];
			c = i+1;
		}
	}
	printf("%d %d",c, b[5]);
	return 0;
}