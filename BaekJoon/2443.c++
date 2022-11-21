//https://www.acmicpc.net/problem/2443

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,i=0;
	scanf("%d", &a);
	for (; i < a+1; i++)
	{
		int b = a - i;
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
}