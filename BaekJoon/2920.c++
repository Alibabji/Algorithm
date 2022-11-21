//https://www.acmicpc.net/problem/2920

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[8];
void check(void)
{
	int i = 0, j = 0;
	for (; i < 7; i++)
	{
		if (a[0] == 1 && a[i] + 1 == a[i + 1]) continue;
		else break;
	}
	for (; j < 7; j++)
	{
		if (a[0] == 8 && a[j] - 1 == a[j + 1]) continue;
		else break;
	}
	if (i == 7) printf("ascending");
	else if (j == 7)printf("descending");
	else printf("mixed");
}
int main(void)
{
	for (int i = 0; i < 8; i++) scanf("%d", &a[i]); //12345678
	check();
	return 0;
}