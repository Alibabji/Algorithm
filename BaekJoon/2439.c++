//https://www.acmicpc.net/problem/2439

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i < a + 1; i++)
	{
		//a에서 i를 뺀 수만큼 공백을 출력
		for (int k = i; k < a; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}