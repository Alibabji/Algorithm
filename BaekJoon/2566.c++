//https://www.acmicpc.net/problem/2566

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int table[9][9], i = 0, max = -1, r, h;
	for (; i < 9; i++)
	{
		for (int j=0; j < 9; j++)
		{
			scanf("%d", &table[i][j]);
			if (table[i][j] >= max) r = i+1, h = j+1, max = table[i][j];
		}
	}
	printf("%d\n%d %d", max, r, h);
	return 0;
}