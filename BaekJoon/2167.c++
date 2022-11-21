//https://www.acmicpc.net/problem/2167

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int array_1[300][300]; int array_x, array_y, repeat, i, j, k, num_1, num_2, num_3, num_4, total = 0;
	scanf("%d %d", &array_x, &array_y);
	for (i = 0; i < array_x; i++)
	{
		for (j = 0; j < array_y; j++)
			scanf("%d", &array_1[i][j]);
	}
	scanf("%d", &repeat);
	for (i = 0; i < repeat; i++)
	{
		total = 0;
		scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);
		for (j=num_1-1; j < num_3; j++)
		{
			for (k = num_2-1; k < num_4; k++)
			{
				total += array_1[j][k];
			}
		}
		printf("%d\n", total);
	}
	return 0;
}