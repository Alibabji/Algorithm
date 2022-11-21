//https://www.acmicpc.net/problem/8958

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int turn;
	char ox[80];
	scanf("%d", &turn);
	for (int i = 0, point=0; i < turn; i++,point=0)
	{
		scanf("%s", ox);
		for (int j = 0, acc = 0; ox[j] != '\0'; j++)
		{
			if (ox[j] == 'O')
			{
				acc++;
				point += acc;
			}
			else acc = 0;
		}
		printf("%d\n", point);
	}
	return 0;
}