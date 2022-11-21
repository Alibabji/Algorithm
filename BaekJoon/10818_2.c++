//https://www.acmicpc.net/problem/10818

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[2], high, low;
	scanf("%d", &num[0]);
	high = -1000000, low = 1000000;
	for (int i = 0; i < num[0]; i++)
	{
		scanf("%d", &num[1]);
		if (num[1] >= high) high = num[1];
		if (num[1] <= low)low = num[1];
	}
	printf("%d %d", low, high);
	return 0;
}