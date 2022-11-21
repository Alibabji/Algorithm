//https://www.acmicpc.net/problem/10809

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check(char a[])
{
	char alp[26];
	for (int i = 0, t = 97; i < 26; i++, t++)
	{
		alp[i] = t;
		int ck = 0;
		while (1)
		{
			if (a[ck] == alp[i])
			{
				printf("%d ", ck);
				break;
			}
			else if (a[ck] == '\0')
			{
				printf("-1 ");
				break;
			}
			ck++;
		}
	}
}
int main(void)
{
	char s[100];
	scanf("%s", s);
	check(s);
	return 0;
}