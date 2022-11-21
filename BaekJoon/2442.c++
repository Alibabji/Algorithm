//https://www.acmicpc.net/problem/2442

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);//a값 받고
	for (int i = 1; i < a+1; i++)
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
	return 0;
}