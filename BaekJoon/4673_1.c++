//https://www.acmicpc.net/problem/4673

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int d(int a)
{
	int b = a + (a / 10000 % 10) + (a / 1000 % 10) + (a / 100 % 10) + (a / 10 % 10) + a % 10;
	return b;
}
int main(void)
{
	int asdf[10000];
	for (int k = 0, qwer=1; k < 10000; k++, qwer++)
		asdf[k] = qwer;
	for (int i = 0; i < 10000; i++)
	{
		bool check = 0;
		for (int j = 1; j < i+2; j++)
		{
			if (asdf[i] == d(j))
			{
				check = 1;
				break;
			}
		}
		if (check == 0)printf("%d\n", asdf[i]);
	}
	return 0;
}