//https://www.acmicpc.net/problem/10818

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, big, small;
	scanf("%d %d", &a, &b);
	big = b, small = b;
	for (int i = 1; i < a; i++)
	{
		scanf("%d", &b);
		if (big < b) big = b;
		if (small > b) small = b;
	}
	printf("%d %d", small, big);
	return 0;
}
