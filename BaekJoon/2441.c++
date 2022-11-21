//https://www.acmicpc.net/problem/2441

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,i=0;
	scanf("%d", &a);
	for (; i < a+1; i++)
	{
		int b = a - i;
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (int l = 0; l < b; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}