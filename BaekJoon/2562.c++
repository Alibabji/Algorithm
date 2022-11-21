//https://www.acmicpc.net/problem/2562

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int b, big = 0, num = 1, i = 1;
	for (; i <= 9; i++)
	{
		scanf("%d", &b);
		if (big < b)
		{
			big = b;
			num = i;
		}
	}
	printf("%d \n%d", big, num);
	return 0;
}