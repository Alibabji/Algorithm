//https://www.acmicpc.net/problem/8393

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, b = 0, c = 0;
	scanf("%d", &n); //n값 받고
	while (b < n+1) //b가 n과 같아질때까지 반복
	{
		c += b;
		b++;
	}
	printf("%d", c);
	return 0;
}