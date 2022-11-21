//https://www.acmicpc.net/problem/2501

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, K, i, j;
	scanf("%d %d", &N, &K); //6 3
	for (i = 1, j = 0; j != K; i++)
	{
		if (N % i == 0) j++;
		if (j == K)break;
		if (i > N)
		{
			i = 0;
			break;
		}
	}
	printf("%d", i);
	return 0;
}
