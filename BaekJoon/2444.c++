//https://www.acmicpc.net/problem/2444

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, i=1;
	scanf("%d", &a);//a값 받고
	for (; i < a+1; i++)
	{
		for (int k = i; k < a; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	int n = 1;
	for (; n < a; n++)
	{
		int b = a - n;
		for (int m = b; m < a; m++)
		{
			printf(" ");
		}
		for (int l = 0; l < b * 2 - 1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}